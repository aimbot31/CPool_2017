/*
** EPITECH PROJECT, 2017
** my_isneg
** File description:
** print if int is positive or negative
*/

#include "my.h"

int my_isneg(int n)
{
	if (n >= 0)
		my_putchar('P');
	else
		my_putchar('N');
	return (0);
}
