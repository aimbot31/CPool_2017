##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Desc
##

SRC_DIR		=	$(realpath .)

SRC		=	$(SRC_DIR)/rush2.c

OBJ		=	$(SRC:.c=.o)

NAME		=	rush2

CFLAGS		+=	-W -Wall -Wextra -pedantic
CFLAGS		+=	-I./include -L./lib/my -lmy

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
