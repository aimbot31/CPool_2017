/*
** EPITECH PROJECT, 2017
** my_show_word_array
** File description:
** show array of words in lines
*/

#include "my.h"

int my_show_word_array(char * const *tab)
{
	while (*tab) {
		my_putstr(tab[0]);
		my_putchar('\n');
		tab++;
	}
	return (0);
}
