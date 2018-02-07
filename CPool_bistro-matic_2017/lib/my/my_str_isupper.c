/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** check if str is only alphanumerical uppercase
*/

#include "my.h"

int my_str_isupper(char const *str)
{
	signed int i = 0;

	while (str[i] != '\0') {
		if(str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
