/*
** EPITECH PROJECT, 2017
** Bistro matic
** File description:
** Check error ( other error )
*/

#include "../../include/bistro-matic.h"

void matched_parenthesis(char *expr)
{
	int i_expr = 0;
	int parenthesis_closed = 0;
	int parenthesis_opened = 0;

	while (expr[i_expr] != '\0') {
		if (expr[i_expr] == ')')
			parenthesis_closed = parenthesis_closed + 1;
		i_expr = i_expr + 1;
	}
	i_expr = 0;
	while (expr[i_expr] != '\0') {
		if (expr[i_expr] == '(')
			parenthesis_opened = parenthesis_opened + 1;
		i_expr = i_expr + 1;
	}
	if (parenthesis_closed != parenthesis_opened) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_USAGE);
	}
}

void unknown_digit(char *expr, char *operators, char *base)
{
	char *str = my_strcat(operators,base);
	int i_expr = 0;
	int i_str = 0;

	while (expr[i_expr] != '\0' && expr[i_str] != '\0') {
		if (str[i_str] == expr[i_expr] && expr[i_expr] != '\0') {
			i_expr = i_expr + 1;
			i_str = 0;
		} else if (str[i_str + 1] != '\0') {
			i_str = i_str + 1;
		}
	}
	if (expr[i_expr] != '\0') {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_BASE);
	}
}
