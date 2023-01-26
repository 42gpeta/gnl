#include "get_next_line.h"

int	main(int ac, char **argv)
{
	int		fd;
	int		index;
	char	*line;

	fd = open("./test/simple.txt", O_RDONLY);
	index = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("[%d] : %s\n", index, line);
		free(line);
		line = get_next_line(fd);
		index++;
	}

	return (0);
}
