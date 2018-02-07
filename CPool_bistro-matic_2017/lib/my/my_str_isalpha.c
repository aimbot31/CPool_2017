/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** check if str is only alphanumerical
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
	signed int i = 0;

	while (str[i] != '\0') {
		if ((str[i] > 'Z' || str[i] < 'A')
		    && (str[i] > 'z' || str[i] < 'a'))
			return (0);
		i++;
	}
	return (1);
}
