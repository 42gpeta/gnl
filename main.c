/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:17:12 by gpeta             #+#    #+#             */
/*   Updated: 2023/01/24 17:22:43 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("./test/simple", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		printf("%s", line);
		free(line);
	}

	return (0);
}
