/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:14 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/30 17:28:25 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/********************************************/
/*											*/
/*				NEW FUNCTIONS				*/
/*											*/
/********************************************/

char	*f_copy_buf_to_stash(char *buf)
{
	char	*stash;
	int		i;
	char	*stop;
	i = 0;

	stop = ft_strchr(buf, '\n');
	stash = malloc(sizeof(char) * (ft_strlen(stop) + 1));
	while (buf[i] != *stop && i < BUFFER_SIZE)
	{
		stash[i] = buf[i];
		i++;
	}
	stash[i] = '\0';
	printf("stash : %s\n", stash);

	return (stash);
}


/********************************************/
/*											*/
/*				DEJA CODE					*/
/*											*/
/********************************************/

static int	f_in_trim(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	iword;
	char	*pn;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (f_in_trim(s1[i], set) && s1[i] != '\0')
		i++;
	while (f_in_trim(s1[j - 1], set) && j > i)
		j--;
	pn = malloc (sizeof(char) * ((j - i) + 1));
	if (!pn)
		return (NULL);
	iword = 0;
	while (i < j)
	{
		pn[iword] = s1[i];
		iword++;
		i++;
	}
	pn[iword] = '\0';
	return (pn);
}

int	f_in_trim(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

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
	while (*s++)
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
