/*
** EPITECH PROJECT, 2017
** my_is_prime
** File description:
** get if number is prime
*/

#include "my.h"

int my_is_prime(int nb)
{
	signed int i = 2;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i < nb) {
		if (nb % i == 0)
			return (0);
		i = i + 1;
	}
	return (1);
}
