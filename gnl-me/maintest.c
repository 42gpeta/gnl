#include "get_next_line.h"

char	*f_copy_buf_to_stash(char *buf)
{
	char	*stash;
	int		i;
	char	*stop;
	i = 0;

	stop = ft_strchr(buf, '\n');
	stash = malloc(sizeof(char) * (ft_strlen(stop) + 1));
	while (buf[i] != stop[0])
	{
		stash[i] = buf[i];
		i++;
	}
	stash[i] = '\0';
	printf("stash : %s\n", stash);

	return (stash);
}

int main()
{
	char buf[27] = "bonjour\nles amis les bleus";

/* TEST SAUT DE LIGNE DANS BUF */
	printf("main buf : %s\n", buf);

/* TEST STRCHR */
	char *test;

	test = f_copy_buf_to_stash(buf);
	printf("main f_copy... : %s\n", test);

	return (0);
}
