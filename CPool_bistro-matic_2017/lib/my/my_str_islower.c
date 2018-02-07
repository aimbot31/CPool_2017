/*
** EPITECH PROJECT, 2017
** my_str_islower
** File description:
** check if str is only alphanumerical lowercase
*/

#include "my.h"

int my_str_islower(char const *str)
{
	signed int i = 0;

	while (str[i] != '\0') {
		if(str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
