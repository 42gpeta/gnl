#include "../get_next_line.h"

int	main(void)
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
		line = get_next_line(fd);
		free(line);
		index++;
	}
	return (0);
}
