NAME := libft.a
SRC = *.c
INCLUDE = libft.h
OBJ += *.o
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
SRC += *.c

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) -c $(FLAGS) -I$(INCLUDE) $(SRC)
	$(AR) rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

just: all clean

.PHONY: all clean fclean re just
