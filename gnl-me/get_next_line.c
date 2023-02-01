/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:12 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/01 18:54:12 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* BUT == obtenir la line jusqu'a '\n' */

char	*get_next_line(int fd)
{
	char	*buf;
	char	*line;
	int		ret;
	static char	*stash;
	int		tmp;
	int		i; // a supprimer

	/* Protection si pas de fichier OU BUFFER_SIZE a 0 */
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	/* Protection du malloc */
	if (!buf)
		return (NULL);

	stash = NULL;
	/* Capture de la lecture transfere dans le buf */
	ret = 1;
	i = 0;
	while (ret)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		buf[ret] = '\0';
		if (!stash)
		{
			stash = malloc(sizeof(char) * BUFFER_SIZE + 1);
		}
		stash = ft_strjoin(stash,buf);
		if (ft_strchr(stash, '\n'))
		{
			// stash = f_del_front_bn(buf);
			line = f_search_bn(stash);
			break;
		}
		
		// printf("gnl buf : %s\n", buf); // a supprimer
		// printf("gnl stash : %s\n", stash); // a supprimer
	}

	// printf("\n\nGNL dernier buf = %s\n", buf); // a supprimer
	// printf("GNL stash = %s\n", stash); // a supprimer
	// printf("\n------------------\n"); // a supprimer
	if (ret == -1)
		printf("error a traitee\n"); // a supprimer
/* 	else if (ret == 0)
	{
		printf("ret == 0\n"); // a supprimer
		return (NULL);
	} */
	return (line);
}

// end