/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:12 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/25 18:18:33 by gpeta            ###   ########.fr       */
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
	int		ret;

	buf = malloc(sizeof(char) * 1024);
	ret = read(fd, buf, BUFFER_SIZE);
	if (ret == -1)
		printf("error a traitee\n");
	else if (ret == 0)
		return (NULL);
	return (buf);
}

