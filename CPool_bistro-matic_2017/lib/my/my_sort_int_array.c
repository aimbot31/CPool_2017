/*
** EPITECH PROJECT, 2017
** my_put_sort_int_array
** File description:
** sort array of int ascending order
*/

#include "my.h"

int my_bubblesort(int *array, int size)
{
	signed int i = 0;
	unsigned int changed_times = 0;
	signed int temp;

	while (i < size - 1) {
		if (array[i] > array[i+1]) {
			temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
			changed_times = changed_times + 1;
		}
		i = i + 1;
	}

	return ((changed_times > 0)? 1 : 0);
}

void my_sort_int_array(int *array, int size)
{
	unsigned int changed = 1;

	while (changed == 1) {
		changed = my_bubblesort(array, size);
	}
}
