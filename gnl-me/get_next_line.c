/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:47:19 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/15 16:05:01 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buf;
	static char	*stash = 0;
	char	*line;
	int		ret;

	/* Protection si pas de fichier OU BUFFER_SIZE a 0 */
	if (fd < 1 || BUFFER_SIZE > 2147483647 || BUFFER_SIZE < 1)
		return (NULL);

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	/* Protection du malloc */
	if (!buf)
		return (NULL);
	line = 0;
	
	if (ft_strchr(stash, '\n'))
	{
		// line = f_search_bn(stash, &stash);
		// line = f_search_bn(stash);
		// stash = f_del_front_bn(stash);
		return (line = f_search_bn(stash, &stash), line);
	}


	/* Capture de la lecture transfere dans le buf */
	ret = BUFFER_SIZE;
	// ret = read(fd, buf, BUFFER_SIZE);
	while (ret)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		buf[ret] = '\0';

		if (ret < 0)
		{
			// printf("error a traitee\n"); // a supprimer
			return (NULL);
		}

		else if (ret == 0)
		{
			// if (ft_strlen(stash) > 0)
			if (*stash != 0)
			{
				// if (f_search_bn(stash))
				if (ft_strchr(stash, '\n'))
				{
					// line = f_search_bn(stash, &stash);
					// line = f_search_bn(stash);
					// stash = f_del_front_bn(stash);
					return (line = f_search_bn(stash, &stash), line);
				}
				line = ft_strdup2(stash);
				*stash = 0;
				return(line);
			}
			free(line);
			break;
		}

		else // cas classique BUFFER_SIZE == ret
		{
			if (!stash)
			{
				stash = malloc(sizeof(char));
				*stash = 0;
			}
			stash = ft_strjoin(stash,buf);

			if (ft_strchr(stash, '\n'))
			{
				// line = f_search_bn(stash, &stash);
				// line = f_search_bn(stash);
				// stash = f_del_front_bn(buf);
				// free(buf); // ici ou dans la fonction f_del_front_bn ? ici == no leaks
				return (line = f_search_bn(stash, &stash), line);
			}
		}
	}
	return (NULL);
}
