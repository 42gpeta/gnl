/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:14 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/15 15:56:48 by gpeta            ###   ########.fr       */
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

	len = (int)ft_strlen(s1) + (int)ft_strlen(s2);
	join = NULL;
	join = malloc(sizeof(char) * (len + 1));
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i] && s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && s2[j] != '\0')
	{
		join[i + j] = s2[j];
		j++;
	}
	join [i + j] = '\0';
	return (join);
}

/********************************************/
/*											*/
/*			#2	NEW FUNCTIONS				*/
/*											*/
/********************************************/

/* Cherche le '\n' dans la stash */
// char	*f_search_bn(char *stash) // v2
// {
// 	char	*line;
// 	int		i;

// 	i = 0;
// 	while (stash[i] && stash[i] != '\n')
// 		i++;
// 	i++;

// 	if (ft_strchr(stash, '\n') == NULL)
// 		line = malloc(sizeof(char) * i + 1);
// 	else
// 		line = malloc(sizeof(char) * i + 2);

// 	/* Protection des mallocs */
// 	if (!line || !stash)
// 		return (NULL);
// 	i = 0;
// 	while (stash[i] && stash[i] != '\n')
// 	{
// 		line[i] = stash[i];
// 		i++;
// 	}
// 	if (stash[i] == '\n')
// 	{
// 		line[i] = '\n';
// 		i++;
// 	} 
// 	line[i] = '\0';
// 	// free(stash); // ****
// 	return (line);
// }

// char	*f_search_bn(char *stash, char **new_stash) // v3
// {
// 	char	*line;
// 	int		i;

// 	i = 0;
// 	while (stash[i] && stash[i] != '\n')
// 		i++;
// 	i++;

// 	if (ft_strchr(stash, '\n') == NULL)
// 		line = malloc(sizeof(char) * i + 1);
// 	else
// 		line = malloc(sizeof(char) * i + 2);

// 	/* Protection des mallocs */
// 	if (!line || !stash)
// 		return (NULL);
// 	i = 0;
// 	while (stash[i] && stash[i] != '\n')
// 	{
// 		line[i] = stash[i];
// 		i++;
// 	}
// 	if (stash[i] == '\n')
// 	{
// 		line[i++] = '\n';
// 		// i++;
// 	}
// 	line[i] = '\0';
// 	// *new_stash = ft_strchr(stash, '\n') + 1;
// 	// free(stash); // ****
// 	return (*new_stash = ft_strchr(stash, '\n') + 1, line);
// }

char	*f_search_bn(char *stash, char **new_stash) // v4
{
	char	*line;
	int		i;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	i++;
	if (ft_strchr(stash, '\n') == NULL)
		line = malloc(sizeof(char) * i + 1);
	else
		line = malloc(sizeof(char) * i + 2);
	if (!line || !stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (*new_stash = ft_strchr(stash, '\n') + 1, line);
}

/* Reprend ce qui est a droite du /n (dans le buf) vers la stash */
// char	*f_del_front_bn(char *buf) // v2
// {
// 	char	*new_stash;
// 	int		i;
// 	int		j;
// 	int		len;
	
// 	i = 0;
// 	while (buf[i] && buf[i] != '\n')
// 		i++;
// 	i++;
// 	len = ft_strlen(buf) - i;
	
// 	// new_stash = ft_calloc((len + 1), sizeof(char));
// 	new_stash = malloc(sizeof(char) * (len + 1)); // ME 10
// 	// new_stash = 0;
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

char	*ft_strdup2(char *s)
{
	size_t	i;
	char	*ps;
	size_t	len;

	len = ft_strlen(s);
	ps = malloc(sizeof(char) * len + 1);
	if (!ps)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ps[i] = s[i];
		i++;
	}
	ps[i] = '\0';
	free(s);
	return (ps);
}

