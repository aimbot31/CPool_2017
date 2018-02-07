/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** print entire int
*/

#include "my.h"

int my_put_min_int(int nb)
{
	if (nb == -2147483648) {
		my_putchar('-');
		my_putchar('2');
		my_putchar('1');
		my_putchar('4');
		my_putchar('7');
		my_putchar('4');
		my_putchar('8');
		my_putchar('3');
		my_putchar('6');
		my_putchar('4');
		my_putchar('8');
		return (1);
	} else
		return (0);
}

int my_put_nbr(int nb)
{
	if (my_put_min_int(nb) == 0) {
		if (nb < 0) {
			nb = -nb;
			my_putchar('-');
		}
		if (nb > 9)
			my_put_nbr((nb - (nb % 10)) / 10);
		my_putchar(nb % 10 + '0');
		return (0);
	}
	return (0);
}
