/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:17 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/21 11:50:40 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* INCLUDE */
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdint.h>

/* BUFFER */
# ifndef BUFFER_SIZE
// #  define BUFFER_SIZE 7 /* par default */
// #  define BUFFER_SIZE 1 /* testeur */
// #  define BUFFER_SIZE 42 /* testeur */
#  define BUFFER_SIZE 10000000 /* testeur */
# endif

/* FUNCTION */
char	*get_next_line(int fd);
char	*f_search_bn(char *stash, char **new_stash);
char	*f_search_bn2(char *stash, char **new_stash, char *buf);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
// char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup2(char *s);
// char	*f_ret_zero(char **stash) ;
char	*f_ret_zero(char **stash, char *buf);
// void	f_give_stash(char **stash, char **buf);
// void	f_give_stash(char **stash, char **buf);
// char	*f_ret(int fd, char **buf, char **stash);
char	*f_ret(int fd, char **stash);
void	f_free(char **stash, char **buf); // sup ?
// int	f_buf(int fd, char **buf, int ret); // sup ?
// int	*f_buf(int fd, char **buf, int ret); // sup ?

#endif