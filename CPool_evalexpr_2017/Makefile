##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	main.c	\
		eval_funcs.c	\
		str_trans.c	\
		do_op/do-op.c	\
		calcule_between_par.c	\
		do_op/manage_nb.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_strlen.c	\
		lib/my/my_getnbr.c	\
		lib/my/my_putchar.c	\
		init_linked_list.c	\
		lib/my/my_revstr.c	\
		lib/my/my_strcpy.c

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) -g3 $(OBJ)

clean:
	rm -f	$(OBJ)

fclean:	clean
	rm -f	$(NAME)

re:	fclean all
