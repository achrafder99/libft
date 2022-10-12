
CC = gcc

NAME = libft.a

all: $(NAME) fclean
$(NAME): compile
	ar rcs $(NAME) *.o
compile:
	gcc -c *.c
fclean:
	rm -rf *.o
clean:
	rm -rf $(NAME)
re : all clean
