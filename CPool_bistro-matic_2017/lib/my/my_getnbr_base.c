/*
** EPITECH PROJECT, 2017
** my_getnbr_base
** File description:
** return number in a given base into base 10
*/

#include "my.h"

int base_pos(char const *base, char c)
{
	unsigned int i = 0;

	while (base[i] != '\0') {
		if (base[i] == c)
			return (i + 1);
		i++;
	}
	return 0;
}

int my_getnbr_base(char const *str, char const *base)
{
	unsigned int i = 0;
	signed int n = 1;
	signed long res = 0;
	unsigned int pos = my_strlen(str) - 1;
	unsigned int b_p = 0;
	unsigned int blg = my_strlen(base);

	while (str[i] == '+' || str[i] == '-') {
		if (str[i] == '-')
			n = -n;
		i++;
	}
	while (base_pos(base, str[i]) > 0) {
		b_p = base_pos(base, str[i]);
		res = res + (b_p - 1) * my_compute_power_rec(blg, pos);
		if (res > 2147483647)
			return (0);
		i++;
		pos--;
	}
	return (res * n);
}
