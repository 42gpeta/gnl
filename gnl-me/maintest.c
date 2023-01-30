#include "get_next_line.h"

/********************************************/
/*											*/
/*	FICHIER TEST FONCTION PAR FONCTION		*/
/*											*/
/********************************************/

int main()
{
	char buf[45] = "bonjour les amis les bleus\nravi de vous voir";
	// char *buf;
	char *test;
	char *stash;
	int		fd;
	int		index;
	int		ret;
	// char	*line;

	fd = open("./test/simple.txt", O_RDONLY);
	index = 0;
	// line = get_next_line(fd);

/****** TEST SAUT DE LIGNE DANS BUF ******/

/* 	printf("main buf : %s\n", buf); */


/****** TEST STRCHR ******/

	test = f_copy_buf_to_stash(buf);
	printf("main f_copy... : %s\n", test);


/****** TEST BOUCLE SUR F_COPY_BUF_TO_STACH ******/

/* 	// buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	ret = read(fd, buf, BUFFER_SIZE);
	while (ret != 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		stash = ft_strjoin(buf, test);
		test = f_copy_buf_to_stash(buf);
	} */

	return (0);
}
