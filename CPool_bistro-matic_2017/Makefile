##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Task01
##

SRC		=	lib/my/my_getnbr.c			\
			lib/my/my_putchar.c			\
			lib/my/my_put_nbr.c			\
			lib/my/my_putstr.c			\
			lib/my/my_strcat.c			\
			lib/my/my_strlen.c			\
			src/main.c				\
			src/help.c				\
			src/errors/syntax_error.c		\
			src/errors/operator_error.c		\
			src/errors/invalid_expression.c		\
			src/errors/other_error.c		\
			src/errors/base_error.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	calc

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -g3

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
