/*
** EPITECH PROJECT, 2017
** my_showstr
** File description:
** put str non printable chars in hex
*/

#include "my.h"

int my_showstr(char const *str)
{
	signed int i = 0;

	while (i < my_strlen(str)) {
		if ((str[i] > 0 && str[i] < 32) || str[i] == 127) {
			my_putchar('\\');
			my_putnbr_base(str[i],"0123456789ABCDEF");
		} else if (str[i] > 31 && str[i] < 127)
			my_putchar(str[i]);
		else
			return (0);
		i++;
	}
	return (1);
}
