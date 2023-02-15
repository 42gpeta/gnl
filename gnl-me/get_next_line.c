/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:47:19 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/15 21:45:40 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*get_next_line(int fd)
// {
// 	char	*buf;
// 	static char	*stash = 0;
// 	char	*line;
// 	int		ret;

// 	/* Protection si pas de fichier OU BUFFER_SIZE a 0 */
// 	if (fd < 1 || BUFFER_SIZE > 2147483647 || BUFFER_SIZE < 1)
// 		return (NULL);

// 	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
// 	/* Protection du malloc */
// 	if (!buf)
// 		return (NULL);
// 	line = 0;

// 	if (ft_strchr(stash, '\n'))
// 		return (line = f_search_bn(stash, &stash), line);

// 	/* Capture de la lecture transfere dans le buf */
// 	ret = BUFFER_SIZE;
// 	while (ret)
// 	{
// 		ret = read(fd, buf, BUFFER_SIZE);
// 		buf[ret] = '\0';
// 		if (ret < 0)
// 			return (NULL);
// 		else if (ret == 0)
// 		{
// 			if (*stash != 0)
// 			{
// 				if (ft_strchr(stash, '\n'))
// 					return (line = f_search_bn(stash, &stash), line);
// 				// line = ft_strdup2(stash, &stash);
// 				line = ft_strdup2(stash);
// 				*stash = 0;
// 				return(line);
// 			}
// 			// free(line);
// 			// break;
// 		}
// 		else // cas classique BUFFER_SIZE == ret
// 		{
// 			if (!stash)
// 			{
// 				stash = malloc(sizeof(char));
// 				*stash = 0;
// 			}
// 			stash = ft_strjoin(stash,buf);
// 			if (ft_strchr(stash, '\n'))
// 				return (line = f_search_bn(stash, &stash), line);
// 		}
// 	}
// 	return (NULL);
// }

// char	*get_next_line(int fd) // v2
// {
// 	char	*buf;
// 	static char	*stash = 0;
// 	char	*line;
// 	int		ret;

// 	if (fd < 1 || BUFFER_SIZE > 2147483647 || BUFFER_SIZE < 1)
// 		return (NULL);
// 	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
// 	if (!buf)
// 		return (NULL);
// 	line = 0;
// 	if (ft_strchr(stash, '\n'))
// 		return (line = f_search_bn(stash, &stash), line);
// 	ret = BUFFER_SIZE;
// 	while (ret)
// 	{
// 		ret = read(fd, buf, BUFFER_SIZE);
// 		buf[ret] = '\0';
// 		if (ret < 0)
// 			return (NULL);
// 		else if (ret == 0)
// 		{
// 			if (*stash != 0)
// 			{
// 				if (ft_strchr(stash, '\n'))
// 					return (line = f_search_bn(stash, &stash), line);
// 				line = ft_strdup2(stash);
// 				*stash = 0;
// 				return (line);
// 			}
// 			return (free(line), NULL);
// 		}
// 		else // cas classique BUFFER_SIZE == ret
// 		{
// 			if (!stash)
// 			{
// 				stash = malloc(sizeof(char));
// 				*stash = 0;
// 			}
// 			stash = ft_strjoin(stash,buf);
// 			if (ft_strchr(stash, '\n'))
// 				return (line = f_search_bn(stash, &stash), line);
// 		}
// 	}
// 	return (NULL);
// }

char	*get_next_line(int fd) // v3
{
	char	*buf;
	static char	*stash = 0;

	if (fd < 1 || BUFFER_SIZE > 2147483647 || BUFFER_SIZE < 1)
		return (NULL);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	if (ft_strchr(stash, '\n'))
		return (f_search_bn(stash, &stash));
	return (f_ret(fd, &buf, &stash));
	
	// while (ret)
	// {
	// 	ret = read(fd, buf, BUFFER_SIZE);
	// 	buf[ret] = '\0';
	// 	if (ret < 0)
	// 		return (NULL);
	// 	else if (ret == 0 && *stash != 0)
	// 		return(f_ret_zero(&stash));
	// 	else // cas classique BUFFER_SIZE == ret
	// 	{
	// 		f_give_stash(&stash, &buf);
	// 		if (ft_strchr(stash, '\n'))
	// 			return (f_search_bn(stash, &stash));
	// 	}
	// }
	// return (NULL);
}
