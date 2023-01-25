/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:44:16 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/24 18:54:52 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	found_newline(t_line **stash)
{
	int		i;
	t_line	*current;

	if (stash == NULL)
		return (0);
	current = f_lstlast(stash);
	while (current->content[i])
	{
		if (current->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

t_line	*f_lstlast(t_line *stash)
{
	t_line	*current;

	current = stash;
	while (stash && stash->next != NULL)
		stash = stash->next;
	return (stash);
}

void	f_end_line(t_line *line, char str)
{
	line = NULL;

	line = 
}