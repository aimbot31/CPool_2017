/*
** EPITECH PROJECT, 2017
** Bistro matic
** File description:
** Check error ( operator error )
*/

#include "../../include/bistro-matic.h"

void check_ops(char const *operators)
{
	if (strlen(operators) != 7) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_OPS);
	}
}

void begin_by_operator(char *expr)
{
	if (!my_char_isnum(expr[0]) && expr[0] != '-') {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_OPS);
	}
}

void double_operator(char *expr)
{
}
