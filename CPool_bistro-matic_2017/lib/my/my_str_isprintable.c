/*
** EPITECH PROJECT, 2017
** my_str_isprintable
** File description:
** check if all chars in str are ascii
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
	signed int i = 0;

	while (str[i] != '\0') {
		if(str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
