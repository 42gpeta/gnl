/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:14 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/02 19:31:25 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/********************************************/
/*											*/
/*				NEW FUNCTIONS				*/
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
	return (line);
}


/* Reprend ce qui est a droite du /n (dans le buf) vers la stash */
char	*f_del_front_bn(char *buf)
{
	char	*new_stash;
	int		i;
	int		j;
	int		len;
	
	i = 0;
	while (buf[i] != '\n' && buf)
		i++;
	i++;
	len = ft_strlen(buf) - i;
	
	new_stash = malloc(sizeof(char) * (len + 1));
	/* Protection du malloc */
	if (!new_stash)
		return (NULL);
	
	j = 0;
	while (buf[i] != '\0' && buf)
	{
		new_stash[j] = buf[i];
		i++;
		j++;
	}
	new_stash[j] = '\0';

	return (new_stash);
}

static char	*f_malloc(char const *s, size_t begin, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;

	if (!s)
		return (NULL);
	ns = f_malloc(s, start, len);
	if (!ns)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		ns[i] = s[start++];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

char	*f_malloc(char const *s, size_t begin, size_t len)
{
	char	*ns;
	size_t	slen;

	slen = ft_strlen(s);
	if (begin > slen)
	{
		ns = malloc(sizeof(char));
		if (!ns)
			return (NULL);
		ns[0] = '\0';
		return (ns);
	}
	else if (begin + len > slen)
		ns = malloc(sizeof(char) * (slen - begin + 1));
	else
		ns = malloc(sizeof(char) * (len + 1));
	return (ns);
}


/********************************************/
/*											*/
/*				DEJA CODE					*/
/*											*/
/********************************************/

char	*ft_strchr(const char *s, int c)
{
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

	if (!s1 || !s2)
		return (0);
	len = (int)ft_strlen(s1) + (int)ft_strlen(s2);
	join = malloc(sizeof(char) * len + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		join[i + j] = s2[j];
		j++;
	}
	join [i + j] = '\0';
	return (join);
}

