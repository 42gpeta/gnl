/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:14 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/20 19:14:37 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/********************************************/
/*											*/
/*			#2	NEW FUNCTIONS				*/
/*											*/
/********************************************/

// char	*f_search_bn(char *stash, char **new_stash) // v4
// {
// 	char	*line;
// 	int		i;

// 	i = 0;
// 	while (stash[i] && stash[i] != '\n')
// 		i++;
// 	i++;
// 	if (ft_strchr(stash, '\n') == NULL)
// 		line = malloc(sizeof(char) * i + 1);
// 	else
// 		line = malloc(sizeof(char) * i + 2);
// 	if (!line || !stash)
// 		return (NULL);
// 	i = 0;
// 	while (stash[i] && stash[i] != '\n')
// 	{
// 		line[i] = stash[i];
// 		i++;
// 	}
// 	if (stash[i] == '\n')
// 		line[i++] = '\n';
// 	line[i] = '\0';
// 	return (*new_stash = ft_strchr(stash, '\n') + 1, line);
// }

char	*f_search_bn(char *stash, char **new_stash) // v5
{
	char	*line;
	int		i;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	i++;
	if (ft_strchr(stash, '\n') == NULL)
		line = malloc(sizeof(char) * i + 1);
	else
		line = malloc(sizeof(char) * i + 2);
	if (!line || !stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	// *new_stash = ft_strchr(stash, '\n') + 1;
	*new_stash = ft_strdup2(ft_strchr(stash, '\n') + 1);
	if (**new_stash == 0)
	{
		free(*new_stash);
		*new_stash = 0;
	}
	free(stash); // essai
	// *stash = 0;
	return (line);
}

char	*f_search_bn2(char *stash, char **new_stash, char *buf) // v5
{
	char	*line;
	int		i;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	i++;
	if (ft_strchr(stash, '\n') == NULL)
		line = malloc(sizeof(char) * i + 1);
	else
		line = malloc(sizeof(char) * i + 2);
	if (!line || !stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	// *new_stash = ft_strchr(stash, '\n') + 1;
	*new_stash = ft_strdup2(ft_strchr(stash, '\n') + 1);
	if (**new_stash == 0)
	{
		free(*new_stash);
		*new_stash = 0;
	}
	free(stash); // essai
	// *stash = 0;
	free(buf);
	return (line);
}

char	*ft_strdup2(char *s) // originale
{
	size_t	i;
	char	*ps;
	size_t	len;

	len = ft_strlen(s);
	ps = malloc(sizeof(char) * len + 1);
	if (!ps)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ps[i] = s[i];
		i++;
	}
	ps[i] = '\0';
	// free(s);
	return (ps);
}

char	*f_ret_zero(char **stash, char *buf) // v2
{
	char	*line;

	free(buf);
	line = 0;
	if (**stash != 0)
	{
		if (ft_strchr(*stash, '\n'))
			return (line = f_search_bn(*stash, stash), line);
		line = ft_strdup2(*stash);
		free(*stash); //infini
		*stash = 0;
		return(line);
	}
	return (line);
}

// void	f_give_stash(char **stash, char **buf)
// {
// 	if (!*stash)
// 	{
// 		*stash = malloc(sizeof(char));
// 		**stash = 0;
// 	}
// 	*stash = ft_strjoin(*stash, *buf);
// 	free(*buf); // test
// 	*buf = 0;
// }

// char	*f_ret(int fd, char **stash) // originale
// {
// 	int		ret;
// 	char	*buf;

// 	buf = malloc(sizeof(char) * (BUFFER_SIZE + 2));
// 	if (!buf)
// 		return (NULL);
// 	// ret = BUFFER_SIZE;
// 	ret = BUFFER_SIZE;
// 	while (ret)
// 	{
// 		// if (buf != NULL)
// 		// 	free(buf); // test
// 		ret = read(fd, buf, BUFFER_SIZE + 1);
// 		buf[ret] = '\0';
// 		if (ret < 0)
// 			return (NULL);
// 		else if (ret == 0 && *stash != 0)
// 			return(f_ret_zero(stash, buf));
// 		else // cas classique BUFFER_SIZE == ret
// 		{
// 			if (!*stash)
// 				*stash = ft_strdup2(buf);
// 			else
// 			// f_give_stash(stash, &buf);
// 			// *stash = malloc(sizeof(char));
// 				*stash = ft_strjoin(*stash, buf);
// 			// free(buf); // test
// 			if (ft_strchr(*stash, '\n'))
// 				return (f_search_bn2(*stash, stash, buf));
// 		}
// 		// free(*stash); // double free
// 		// free(buf); // double free
// 	}
// 	free(*stash);
// 	free(buf);
// 	return (NULL);
// }

// char	*f_ret(int fd, char **stash) // v2
// {
// 	int		ret;
// 	char	*buf;

// 	buf = malloc(sizeof(char) * (BUFFER_SIZE + 2));
// 	if (!buf)
// 		return (NULL);
// 	ret = BUFFER_SIZE;
// 	while (ret)
// 	{
// 		ret = read(fd, buf, BUFFER_SIZE + 1);
// 		buf[ret] = '\0';
// 		if (ret < 0)
// 			return (NULL);
// 		else if (ret == 0 && *stash != 0)
// 			return(f_ret_zero(stash, buf));
// 		else // cas classique BUFFER_SIZE == ret
// 		{
// 			if (!*stash)
// 				*stash = ft_strdup2(buf);
// 			else
// 				*stash = ft_strjoin(*stash, buf);
// 			if (ft_strchr(*stash, '\n'))
// 				return (f_search_bn2(*stash, stash, buf));
// 		}
// 	}
// 	return (f_free(stash, &buf), NULL);
// }

// void	f_free(char **stash, char **buf)
// {
// 	free(*stash);
// 	free(*buf);
// }

// char	*f_ret(int fd, char **stash) // v3
// {
// 	int		ret;
// 	char	*buf;

// 	buf = malloc(sizeof(char) * (BUFFER_SIZE + 2));
// 	if (!buf)
// 		return (NULL);
// 	ret = BUFFER_SIZE;
// 	while (ret)
// 	{
// 		ret = f_buf(fd, &buf, ret);
// 		if (ret < 0)
// 			return (NULL);
// 		else if (ret == 0 && *stash != 0)
// 			return(f_ret_zero(stash, buf));
// 		else // cas classique BUFFER_SIZE == ret
// 		{
// 			if (!*stash)
// 				*stash = ft_strdup2(buf);
// 			else
// 			// f_give_stash(stash, &buf);
// 			// *stash = malloc(sizeof(char));
// 				*stash = ft_strjoin(*stash, buf);
// 			// free(buf); // test
// 			if (ft_strchr(*stash, '\n'))
// 				return (f_search_bn2(*stash, stash, buf));
// 		}
// 	}
// 	free(*stash);
// 	free(buf);
// 	return (NULL);
// }

// int	f_buf(int fd, char **buf, int ret) // originale
// {
// 	if (BUFFER_SIZE < 1)
// 	{
// 		free(*buf);
// 		*buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
// 		if (!(buf))
// 			return (-1);
// 		ret = read(fd, *buf, BUFFER_SIZE + 1);
// 		*buf[ret] = '\0';
// 	}
// 	else
// 	{
// 		ret = read(fd, buf, BUFFER_SIZE + 2);
// 		*buf[ret] = '\0';
// 	}
// 	return (ret);
// }

// int	*f_buf(int fd, char **buf, int *ret) // v2
// {
// 	int	*perror;
	
// 	perror = ret;
// 	*perror = -1;
// 	if (BUFFER_SIZE == 1)
// 	{
// 		free(*buf);
// 		*buf = malloc(sizeof(char) * (BUFFER_SIZE + 2));
// 		if (!(buf))
// 			return (perror);
// 		ret = read(fd, *buf, BUFFER_SIZE + 1);
// 		*buf[*ret] = '\0';
// 	}
// 	else
// 	{
// 		ret = read(fd, buf, BUFFER_SIZE + 1);
// 		*buf[ret] = '\0';
// 	}
// 	return (ret);
// }

char	*f_ret(int fd, char **stash) // v4
{
	int		ret;
	char	*buf;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	ret = BUFFER_SIZE;
	while (ret)
	{
		ret = read(fd, buf, BUFFER_SIZE + 0);
		// if (!stash && ret == 0)
		// 	buf[ret] = '\0';
		buf[ret] = '\0';
		if (ret < 0)
			return (NULL);
		else if (ret == 0 && *stash != 0)
			return(f_ret_zero(stash, buf));
		else // cas classique BUFFER_SIZE == ret
		{
			if (!*stash)
				*stash = ft_strdup2(buf);
			else
				*stash = ft_strjoin(*stash, buf);
			if (ft_strchr(*stash, '\n'))
				return (f_search_bn2(*stash, stash, buf));
		}
	}
	return (f_free(stash, &buf), NULL);
}

void	f_free(char **stash, char **buf)
{
	free(*stash);
	free(*buf);
}