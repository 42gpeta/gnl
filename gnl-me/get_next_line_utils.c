/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:14 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/27 16:26:57 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* char	*f_copy_buf_to_stash(char *buf)
{
	char	*stash;
	char	*test;
	int		i;
	int		len;

	// i = 0;
	// len = ft_strlen(ft_strrchr(buf, '\n'));
	// printf("len stash = %d\n", len); // a supprimer
	// stash = malloc(sizeof(char) * len);
	test = stash;
	buf = "bonjour les amis";
	while (!ft_strrchr(buf, '\n'))
	{
		stash = ft_strjoin(stash, buf);
		printf("tst");
		break;
	}
	return (stash);
} */

/* char	*f_copy_buf_to_stash(char *buf)
{
	char	*stash;

	stash = ft_strrchr(buf, '\n');
} */






/* DEJA CODE */

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
