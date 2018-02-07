/*
** EPITECH PROJECT, 2017
** bistro
** File description:
** main
*/

#include "../include/bistro-matic.h"

int main(int ac, char **av)
{
	unsigned int size;
	char *expr;

	check_base("01256789");
	check_ops("()+-*");
	size = my_getnbr("3");
	syntax_error("()+-*", "0123456789");
	return (0);
}
