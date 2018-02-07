/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** square root
*/

#include "my.h"

int my_compute_square_root(int nb)
{
	signed int i = 1;

	while (i < nb && i < 46340)
	{
		if (nb == i * i)
			return (i);
		i = i + 1;
	}
	return (0);
}
