/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:14 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/26 16:51:15 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*f_copy_to_stash(char *buf)
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
	}
	return (stash);
}







/* DEJA CODE */

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (len-- > 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
	}
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
