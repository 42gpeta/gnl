#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		i;
	char	*line;

	fd = open("./test/simple.txt", O_RDONLY);
	i = 0;
	while (line = get_next_line(fd))
	{
		printf("[%d] : %s\n", i, line);
		i++;
	}
	free(line);

	return (0);
}
