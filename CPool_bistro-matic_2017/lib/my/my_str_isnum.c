/*
** EPITECH PROJECT, 2017
** my_str_isnum
** File description:
** check if str is only numerical
*/

#include "my.h"

int my_str_isnum(char const *str)
{
	signed int i = 0;

	while (str[i] != '\0') {
		if(str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
