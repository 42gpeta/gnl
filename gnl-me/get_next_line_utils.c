/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:14 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/09 15:00:16 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/********************************************/
/*											*/
/*			#1	DEJA CODE					*/
/*											*/
/********************************************/

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;
	int		len;

	// if (!s1 || !s2)
	// 	len = (int)ft_strlen(s2);
	// else
	// 	len = (int)ft_strlen(s1) + (int)ft_strlen(s2);
	len = (int)ft_strlen(s1) + (int)ft_strlen(s2);
	// if (!s1 || !s2)
	// 	return(NULL);

	// len = (int)ft_strlen(s1) + (int)ft_strlen(s2);
	join = malloc(sizeof(char) * len + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2 && s2[j] != '\0')
	{
		join[i + j] = s2[j];
		j++;
	}
	join [i + j] = '\0';
	// free((void*)s1);
	return (join);
}

/********************************************/
/*											*/
/*			#2	NEW FUNCTIONS				*/
/*											*/
/********************************************/

/* Cherche le '\n' dans la stash */
char	*f_search_bn(char *stash)
{
	char	*line;
	char	*stop;
	int		i;
	int		len;
	int		res;

	stop = ft_strchr(stash, '\n');
	len = ft_strlen(stash);
	res = len - ft_strlen(stop);
	
	line = malloc(sizeof(char) * res + 2);
	/* Protection du malloc */
	if (!line)
		return (NULL);
	
	i = 0;
	while (stash[i] != *stop /* && i < res */)
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\n';
	i++;
	line[i] = '\0';
	free(stash);
	return (line);
}

/* Reprend ce qui est a droite du /n (dans le buf) vers la stash */
// char	*f_del_front_bn(char *buf) // orginal
// {
// 	char	*new_stash;
// 	int		i;
// 	int		j;
// 	int		len;
	
// 	i = 0;
// 	while (buf && buf[i] != '\n')
// 		i++;
// 	i++;
// 	len = ft_strlen(buf) - i;
	
// 	// new_stash = ft_calloc((len + 1), sizeof(char));
// 	new_stash = malloc(sizeof(char) * (len + 1)); // ME 10
// 	new_stash = 0;
// 	/* Protection du malloc */
// 	if (!new_stash)
// 		return (NULL);
	
// 	j = 0;
// 	while (buf && buf[i] != '\0')
// 	{
// 		new_stash[j] = buf[i];
// 		i++;
// 		j++;
// 	}
// 	new_stash[j] = '\0';
// 	free (buf); // ici ou dans la fonction get_next_line ? ici == leaks
// 	return (new_stash);
// }

char	*f_del_front_bn(char *buf) // v2
{
	// char	*new_stash;
	// int		i;
	// int		j;
	// int		len;
	
	while (*buf != '\n')
		buf++;
	buf++;
	return ((char *)buf);
	
	// i = 0;
	// while (buf && buf[i] != '\n')
	// 	i++;
	// i++;
	// len = ft_strlen(buf) - i;
	
	// // new_stash = ft_calloc((len + 1), sizeof(char));
	// new_stash = malloc(sizeof(char) * (len + 1)); // ME 10
	// new_stash = 0;
	// /* Protection du malloc */
	// if (!new_stash)
	// 	return (NULL);
	
	// j = 0;
	// while (buf && buf[i] != '\0')
	// {
	// 	new_stash[j] = buf[i];
	// 	i++;
	// 	j++;
	// }
	// new_stash[j] = '\0';
	// free (buf); // ici ou dans la fonction get_next_line ? ici == leaks
	// return (new_stash);
}
char	*f_last_line(char *stash)
{
	char	*lst_line;
	int		i;

	if (!stash)
		return (NULL);

	lst_line = malloc(sizeof(char) * ft_strlen(stash));
	if (!lst_line)
		return (NULL);

	i = 0;
	while (stash[i] != '\0')
	{
		lst_line[i] = stash[i];
		i++;
	}
	lst_line[i] = '\0';
	return (lst_line);
}

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		((unsigned char *)s)[i] = (unsigned char)c;
// 		i++;
// 	}
// 	return (s);
// }

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	void	*nwtab;

// 	if (nmemb == 0 || size == 0)
// 		return (malloc(0));
// 	if (size && nmemb > SIZE_MAX / size)
// 		return (NULL);
// 	nwtab = (void *)malloc((nmemb * size) * sizeof(char));
// 	if (!nwtab)
// 		return (NULL);
// 	ft_memset(nwtab, '\0', nmemb * size);
// 	return (nwtab);
// }

