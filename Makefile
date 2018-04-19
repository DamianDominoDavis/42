NAME = libft.a
SRC = src/*.c
INCLUDE = src/libft.h
OBJ = *.o
CC = gcc -Wall -Wextra -Werror

all:
	$(CC) -c -I$(INCLUDE) $(SRC)
	ar -cvq $(NAME) $(OBJ)

clean:
	/bin/rm $(OBJ)

fclean:
	make clean
	/bin/rm $(NAME)

re:
	make fclean
	make all
