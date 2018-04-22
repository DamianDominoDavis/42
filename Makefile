NAME = libft.a
SRC = *.c
INCLUDE = libft.h
OBJ = *.o
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I .
AR = ar
SRC = *.c


all:
	$(CC) -c -I$(INCLUDE) $(SRC)
	ar -cvq $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

just:
	make re
	make clean
