/*
** EPITECH PROJECT, 2017
** my_evil_str
** File description:
** invert string
*/

#include "my.h"

char *my_revstr(char *str)
{
	unsigned int count = my_strlen(str) - 1;
	signed int i = 0;
	char temp;

	while (i < my_strlen(str)/2) {
		temp = str[count];
		str[count] = str[i];
		str[i] = temp;
		count--;
		i++;
	}
	return (str);
}
