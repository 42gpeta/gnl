#NAME =			gnl
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

#all : $(NAME)

%.o : %.c
	$(CC) -c $<
#	$(CC) -o $@ -c $<

#$(NAME) : $(OBJ)
#	$(CC) $(OBJ) -o gnl
#	$(CC) $(OBJ) -o $@ $^

main : $(OBJ)
	$(CC) -g $(SRC_MAIN) && ./a.out
#	$(CC) $(CFLAGS) $(SRC_MAIN)&& ./a.out

gdb_main :
	$(CC) -g $(SRC_MAIN) && gdb ./a.out

maintest :
	$(CC) -g $(SRC_MAINTEST) && ./a.out
#	$(CC) $(CFLAGS) $(SRC_MAINTEST)&& ./a.out

gdb_maintest :
	$(CC) -g $(SRC_MAINTEST) && gdb ./a.out

val :
	cc -g main.c get_next_line.c get_next_line_utils.c
	valgrind --leak-check=full ./a.out

free : 
	@echo "*** GESTION FREE ***"
	@echo ------------------------------------------
	@echo "*** RESULT ***" 
	@echo "" 
	@cc -g main.c get_next_line.c get_next_line_utils.c
	@valgrind --leak-check=full ./a.out 2> ./test/result.txt
	@echo ------------------------------------------
	@echo "*** FREE ***"
	@echo "" 
	@grep "total heap" ./test/result.txt
	@grep "ERROR SUMMARY" ./test/result.txt
	@echo ------------------------------------------
	
# ko_list :
# 	make m 2> ../test/ko | grep "KO" 1> ../test/ko-list.txt
# 	rm ../test/ko

# result : main
# 	@$(CC) $(SRC_MAIN)
# 	@./a.out > ./test/result.txt
# 	@cat -e ./test/result.txt

result : $(SRC_MAIN)
	@$(CC) $(SRC_MAIN) && ./a.out > ./test/result.txt
	cat -e ./test/result.txt

log :
	git log | grep "    " | head -3  | cut -c 5-

clean :
	rm -rf $(OBJ)

fclean : clean

re : fclean all

.PHONY : all clean fclean re log val free result

## dans le Makefile du testeur
# ko-list :
#	make m 2> ../test/ko.c | grep "KO" 1> ../test/ko-list.txt
#	rm ../test/ko.c




