/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:12 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/27 16:53:54 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* char	*get_next_line(int fd)
{
	char *line;



	return (line)
} */

char	*get_next_line(int fd)
{
	char	*buf;
	char	*line;
	char	*stash;
	int		ret;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	buf[BUFFER_SIZE] = '\0';
	printf("stash = %s\n", stash); // a supprimer
	ret = read(fd, buf, BUFFER_SIZE);
	if (ret == -1)
		printf("error a traitee\n"); // a supprimer
	else if (ret == 0)
	{
		printf("ret == 0\n"); // a supprimer
		return (NULL);
	}
	stash = f_copy_buf_to_stash(buf);
	return (line);
}

