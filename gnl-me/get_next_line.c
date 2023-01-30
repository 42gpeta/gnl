/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:12 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/30 17:43:52 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* BUT == obtenir la line jusqu'a '\n' */

char	*get_next_line(int fd)
{
	char	*buf;
	char	*line;
	char	*stash;
	int		ret;
	int		already_readed;
	int		i;

	/* Protection si pas de fichier OU BUFFER_SIZE a 0 */
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	/* Protection du malloc */
	if (!buf)
		return (NULL);

	stash = NULL;
	/* Capture de la lecture transfere dans le buf */
	ret = read(fd, buf, BUFFER_SIZE);
	i = 0;
	while (ret > 0)
	{
		buf[ret] = '\0';
		stash = ft_strjoin(buf,stash);
		ret = read(fd, buf, BUFFER_SIZE);
		printf("gnl buf : %s\n", buf);
		i++;
	}
	line = malloc(sizeof(char) * (ft_strlen(stash + 1)));
	// f_copy_buf_to_stash(buf, line);
	printf("\nGNL stash = %s\n", stash); // a supprimer
	
	while (stash)
	{
		*line = *stash;
	}
	line[ft_strlen(stash)] = '\0';
	printf("\n\nGNL dernier buf = %s\n", buf); // a supprimer
	printf("GNL line = %s\n", line); // a supprimer
	printf("\n------------------\n"); // a supprimer

	if (ret == -1)
		printf("error a traitee\n"); // a supprimer
/* 	else if (ret == 0)
	{
		printf("ret == 0\n"); // a supprimer
		return (NULL);
	} */
	return (line);
}
