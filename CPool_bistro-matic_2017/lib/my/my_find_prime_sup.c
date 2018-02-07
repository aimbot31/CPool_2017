/*
** EPITECH PROJECT, 2017
** my_find_prime_sup
** File description:
** find prime sup
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
	signed int i = nb;

	if (nb < 0)
		return (2);
	while (i < 2147483647) {
		if (my_is_prime(i) == 1)
			return (i);
		i = i + 1;
	}
	return 0;
}
