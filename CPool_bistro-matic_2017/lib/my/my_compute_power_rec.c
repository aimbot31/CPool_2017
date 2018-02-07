/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** recursive power
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
	signed int result = nb;

	if (p == 0)
		return (1);
	if (p < 0)
		return (0);
	if (p > 0)
		result = nb * my_compute_power_rec(result, p - 1);
	if (result < 0)
		return (0);
	return (result);
}
