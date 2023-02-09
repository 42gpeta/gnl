#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		index;
	char	*line;

	// fd = open("./test/simple.txt", O_RDONLY);
	// fd = open("./test/lorem.txt", O_RDONLY);
	// fd = open("./test/biglorem.txt", O_RDONLY);
	// fd = open("./tripouille/files/multiple_line_no_nl", O_RDONLY);
	fd = open("./tripouille/files/41_no_nl", O_RDONLY);
	if (fd == -1)
	{
		printf("open() fail\n");
		return (1);
	}
	
	index = 0;
	line = 0;
	line = get_next_line(fd);
	while (line /* && index < 1 */)
	{
		if (!line)
			break;
		printf("[%d] : %s\n", index, line);
		free(line);
		line = get_next_line(fd);
		if (line == NULL)
		{
			// line = get_next_line(fd);
			printf("c'est NULL\n");
			break;
		}
		index++;
	}
	free(line);
	
	// close(fd);
	if (close(fd) == -1)
	{
		printf("close() fail : %d\n", fd);
		return (1);
	}
	else
		printf("close() succes : %d\n", fd);
	return (0);
}
