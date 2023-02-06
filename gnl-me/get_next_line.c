/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:12 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/06 15:19:01 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buf;
	char	*line;
	int		ret;
	static char	*stash;

	/* Protection si pas de fichier OU BUFFER_SIZE a 0 */
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	/* Protection du malloc */
	if (!buf)
		return (NULL);

	/* Capture de la lecture transfere dans le buf */
	ret = BUFFER_SIZE;
	while (ret == BUFFER_SIZE)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		buf[ret] = '\0';
		if (!stash)
		{
			stash = malloc(sizeof(char) * BUFFER_SIZE + 1);
			if (!stash)
				return (NULL);
		}
		stash = ft_strjoin(stash,buf);
		if (ft_strchr(stash, '\n'))
		{
			line = f_search_bn(stash);
			stash = f_del_front_bn(buf);
			free(buf);
			break;
		}
	
		else if (ret < BUFFER_SIZE && ret > 0)
		{
			line = f_last_line(stash);
			free(buf);
		}

		else if (ret == 0)
		{
			printf("ret == 0\n"); // a supprimer
			return (NULL);
		}
		else if (ret == -1)
			printf("error a traitee\n"); // a supprimer
	}
	return (line);
}
