/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** print a string
*/

#include "my.h"

int my_putstr(char const *str)
{
	unsigned int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
	return (0);
}
