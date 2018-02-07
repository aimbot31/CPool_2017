##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Desc
##

NAME	= infin_add

CC	= gcc

PLIB	= lib/my/libmy.a

RM	= rm -f

SRCS	= ./inf_add.c	\
	  ./inf_func.c

CFLAGS = -I
CFLAGS += -W -Wall -Wextra -pedantic

all: $(NAME)

$(NAME): $(PBLIB) $(SRCS)
	 $(CC) $(SRCS) $(PLIB) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
