/*
** EPITECH PROJECT, 2017
** Bistro matic
** File description:
** Check error (base error)
*/

#include "../../include/bistro-matic.h"

void check_base(char const *b)
{
	if (my_strlen(b) != 10) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_BASE);
	}
}
