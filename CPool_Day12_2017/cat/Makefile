##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Desc
##

NAME	= cat

CC	= gcc

PLIB 	= ../lib/my/libmy.a

RM	= rm -f

SRCS	= ./cat.c

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
