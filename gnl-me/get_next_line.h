/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:27:17 by gpeta             #+#    #+#             */
/*   Updated: 2023/02/13 15:56:14 by gpeta            ###   ########.fr       */
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
#  define BUFFER_SIZE 7 /* par default */
// #  define BUFFER_SIZE 12583 /* limite dans ME 10 */
// #  define BUFFER_SIZE 100000 /* limite dans ME 11 */
# endif

/* STRUCTURE */
typedef struct s_line
{
	char			*content;
	struct s_line	*next;
}	t_line;

/* FUNCTION */
char	*get_next_line(int fd);
char	*f_search_bn(char *stash);
char	*f_del_front_bn(char *stash);
char	*f_last_line(char *stash);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char *dest, char *src);
// char	*delete(char *stash);
char	*ft_strdup(const char *s);


#endif