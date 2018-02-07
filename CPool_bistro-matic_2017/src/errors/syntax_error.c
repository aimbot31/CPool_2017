/*
** EPITECH PROJECT, 2017
** Bistro Matic
** File description:
** Check error ( syntax error )
*/

#include "../../include/bistro-matic.h"

void syntax_error(char *operators, char *base)
{
	char *str = my_strcat(operators, base);
	int i_letter = 0;
	int i_string = 0;

	while (str[i_letter] != '\0') {
		while (str[i_string] != '\0') {
			if (str[i_string] == str[i_letter] &&
				i_letter != i_string) {
				my_putstr(SYNTAX_ERROR_MSG);
				exit(EXIT_USAGE);
			}
			i_string = i_string + 1;
		}
		i_letter = i_letter + 1;
		i_string = 0;
	}
}
