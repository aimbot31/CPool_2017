/*
** EPITECH PROJECT, 2017
** Bistro matic
** File description:
** Check error (invalid expression)
*/

#include "../../include/bistro-matic.h"

void empty_expression(char *expr)
{
	if (expr[0] == '\0' || my_strlen(expr) < 1) {
		my_putstr(ERROR_MSG);
		exit(EXIT_SIZE_NEG);
	}
}

int my_char_isnum(char i)
{
	if (i < '0' || i > '9')
		return (0);
	return (1);
}

void invalid_expression(char *expr)
{
	int i_expr = 0;

	while (expr[i_expr] != '\0') {
		if (expr[i_expr] == '(' && my_char_isnum(expr[i_expr - 1])) {
			my_putstr(ERROR_MSG);
			exit(EXIT_USAGE);
		}
		if (expr[i_expr] == ')' && my_char_isnum(expr[i_expr + 1])) {
			my_putstr(ERROR_MSG);
			exit(EXIT_USAGE);
		}
		i_expr = i_expr + 1;
	}
}

char *get_expr(unsigned int size)
{
	char *expr;

	if (size <= 0) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_SIZE_NEG);
	}
	expr = malloc(size + 1);
	if (expr == 0) {
		my_putstr(ERROR_MSG);
		exit(EXIT_MALLOC);
	}
	if (read(0, expr, size) != size) {
		my_putstr(ERROR_MSG);
		exit(EXIT_READ);
	}
	empty_expression(expr);
	expr[size] = 0;
	return (expr);
}
