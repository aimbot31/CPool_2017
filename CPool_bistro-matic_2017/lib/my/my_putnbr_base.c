/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** return number in a given base
*/

#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
	if (nbr < 0) {
		nbr = -nbr;
		my_putchar('-');
	}
	if (nbr > my_strlen(base) - 1) {
		my_putnbr_base(nbr / my_strlen(base), base);
		my_putnbr_base(nbr % my_strlen(base), base);
	} else
		my_putchar(base[nbr % my_strlen(base)]);
	return (0);
}

int main()
{
	my_putnbr_base(1233434, "ab");
}
