/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:47:19 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/17 22:46:45 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd) // v3
{
	// char	*buf;
	static char	*stash = 0;
	// int	index = 0;

	if (fd < 1 || BUFFER_SIZE > 2147483647 || BUFFER_SIZE < 1)
		return (NULL);
	// index++;
	// printf("gnl cunt : %d\n", index);
	if (ft_strchr(stash, '\n'))
		return (f_search_bn(stash, &stash));
	// buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	// if (!buf)
	// 	return (NULL);
	return (f_ret(fd, &stash));
}

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

// char	*ft_strjoin(char const *s1, char const *s2) // originale
// {
// 	int		i;
// 	int		j;
// 	char	*join;
// 	int		len;

// 	len = (int)ft_strlen(s1) + (int)ft_strlen(s2);
// 	join = NULL;
// 	join = malloc(sizeof(char) * (len + 1));
// 	if (!join)
// 		return (NULL);
// 	i = 0;
// 	while (s1[i] && s1[i] != '\0')
// 	{
// 		join[i] = s1[i];
// 		i++;
// 	}
// 	j = 0;
// 	while (s2[j] && s2[j] != '\0')
// 	{
// 		join[i + j] = s2[j];
// 		j++;
// 	}
// 	join [i + j] = '\0';
// 	return (join);
// }

char	*ft_strjoin(char *s1, char *s2) // v2
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
	// if (s1)
	free(s1);
	// free(s2);
	return (join);
}