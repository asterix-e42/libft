
NAME = a.out
CC = gcc
CFLAG = -I. -Wall -Werror -Wextra

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c  

OBJ = $(SRC:.c = .o)

all: 2
	./$(NAME)

1: $(OBJ) test.c
	$(CC) -o $(NAME) test.c $(OBJ) $(CFLAG)

2: $(OBJ) test2.c
	$(CC) -o $(NAME) test2.c $(OBJ) $(CFLAG)

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: all clean fclean re
