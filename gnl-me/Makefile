CC = 			cc
CFLAGS = 		-Wall -Wextra -Werror
NORMINETTE =	norminette -R CheckForbiddenSourceHeader *.c *.h

###############################################
##	SOURCES

SRC_MAIN = main.c get_next_line.c get_next_line_utils.c 
SRC_MAINTEST = maintest.c get_next_line.c get_next_line_utils.c 

OBJ = $(SRC:.c=.o)


###############################################
##	RULES

%.o : %.c
	$(CC) -o $@ -c $^ $(CFLAGS)
maintest :
	cc $(SRC_MAINTEST)&& ./a.out
#	cc $(CFLAGS) $(SRC_MAINTEST)&& ./a.out

gdb_maintest :
	cc -g $(SRC_MAINTEST)&& gdb ./a.out

main :
	cc $(SRC_MAIN)&& ./a.out
#	cc $(CFLAGS) $(SRC_MAIN)&& ./a.out

gdb_main :
	cc -g $(SRC_MAIN)&& gdb ./a.out

result : main
	cc $(SRC_MAIN)&& ./a.out > ./test/result.txt
	cat -e ./test/result.txt


clean :
	rm -rf $(OBJ)

fclean : clean


re : fclean all

.PHONY : all clean fclean re




