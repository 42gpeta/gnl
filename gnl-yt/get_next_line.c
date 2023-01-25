/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:44:31 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/24 19:29:31 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_line	*stash;
	char			*line;
	int				letter_read;

	stash = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0))
		return (NULL);

	letter_read = 1;
	line = NULL;

	/* 1. read from fd and add to linked list */
	read_and_stash(fd, &stash, &letter_read);
	if (!stash)
		return (NULL);
	/* 2. extract from stash to line */
	
	
	/* 3. clean up stash */
	
	
	return (line);
}

/* uses read() to add characters to the stash */
void	read_and_stash(t_line **stash, int *letter_read, int fd)
{
	char	*buff;

	buff = malloc(sizeof(char) * (BUFFER_SIZE +1));
	if (!buff)
		return (NULL);
	while (!found_newline(*stash) && *letter_read != 0)
	{
		*letter_read = (int)read(fd, buff, BUFFER_SIZE);
		if ((*stash == NULL && *letter_read == 0) || *letter_read == -1)
		{
			free(buff);
			return ;
		}
		buff[*letter_read] = '\0';
		add_to_stash(*stash, buff, *letter_read);
	}
}

/* adds the content of our buffer to the end of our stash */
void	add_to_stash(t_line **stash, char *buff, int letter_read)
{
	int		i;
	t_line	*last;
	t_line	*nline;

	nline = malloc(sizeof(t_line));
	if (!nline)
		return ;

	nline->next = NULL;
	nline->content = malloc(sizeof(char) * (letter_read + 1));
	if (!nline->content)
		return ;

	i = 0;
	while (buff[i] && i < letter_read)
	{
		nline->content[i] = buff[i];
		i++;
	}
	nline->content[i] = '\0';
	if (!*stash)
	{
		*stash = nline;
		return ;
	}
	last = f_lstlast(stash);
	last->next = nline;
}

/*	extracts all characters from our stash and stores them in out line
	stopping after the first \n it encounters */
void	extract_line()
{
	
}

/*	After extracting the line that was read, we don't need those characters anymore.
	This function clears the stash do only the charaacters that have not been returned at 
	the end of gnl remain in our static stash */
void	clen_stash()
{
	
}




