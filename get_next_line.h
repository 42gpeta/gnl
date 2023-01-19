/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:44:20 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/19 18:46:50 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H	
# define GET_NEXT_LINE_H

//# include <stdio.h>
# include <unistd.h>

char	*get_next_line(int fd);

typedef struct s_line	t_line;

struct s_line
{
	char	*str;
	t_line	*next;
};


#endif