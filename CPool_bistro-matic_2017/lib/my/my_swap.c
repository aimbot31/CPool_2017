/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** swap 2 ints
*/

#include "my.h"

void my_swap(int *a, int *b)
{
	signed int temp = *a;

	*a = *b;
	*b = temp;
}
