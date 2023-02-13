/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:12 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/13 13:49:04 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buf;
	static char	*stash = 0;
	// static char	*stash;
	char	*line;
	int		ret;

	/* Protection si pas de fichier OU BUFFER_SIZE a 0 */
	if (fd < 0 ||/*  BUFFER_SIZE > 2147483647 || */ BUFFER_SIZE <= 0)
		return (NULL);

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	/* Protection du malloc */
	if (!buf)
		return (NULL);
	line = 0;

	/* Capture de la lecture transfere dans le buf */
	ret = BUFFER_SIZE;
	// ret = read(fd, buf, BUFFER_SIZE);
	while (ret > 0 && !(ft_strchr(stash, '\n')))
	{
		// printf("open\n");
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == 0)
			return (NULL);
		buf[ret] = '\0';
		stash = ft_strjoin(stash,buf);
	}
	// printf("sortie stash: %s\n", stash);
	// line = malloc(sizeof(char) * ft_strlen(stash) + 1);
	// line = ft_strdup(stash);
	line = f_search_bn(stash);
	// printf("line f : %s\n", line);
	stash = delete(stash);
	// printf("static : %s\n", stash);
	// if (ret == 0)
	// {
	// 	line = f_last_line(stash);
	// 	printf("line last : %s\n", line);
	// 	printf("ret == 0\n"); // a supprimer
	// 	// free(line);
	// 		// free(stash);
	// 		return (line);
	// }
	// else if (ret == -1)
	// 	printf("error a traitee\n"); // a supprimer
	// }
	return (line);
}
