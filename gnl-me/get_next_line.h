/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:17 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/16 14:44:40 by gpeta            ###   ########.fr       */
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
// #  define BUFFER_SIZE 12583 /* limite dans ME 10 */
// #  define BUFFER_SIZE 100000 /* limite dans ME 11 */
#  define BUFFER_SIZE 41 /* testeur */
# endif

/* FUNCTION */
char	*get_next_line(int fd);
char	*f_search_bn(char *stash, char **new_stash);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup2(char *s);
char	*f_ret_zero(char **stash) ;
void	f_give_stash(char **stash, char **buf);
char	*f_ret(int fd, char **buf, char **stash);

#endif