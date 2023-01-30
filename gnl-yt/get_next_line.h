/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:44:20 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/24 19:24:56 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H	
# define GET_NEXT_LINE_H

//# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_line
{
	char			*content;
	struct s_line	*next;
}	t_line;

char	*get_next_line(int fd);
t_line	*f_lstlast(t_line *stash);







#endif