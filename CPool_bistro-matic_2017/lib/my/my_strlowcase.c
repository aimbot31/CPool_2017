/*
** EPITECH PROJECT, 2017
** my_strlowcase
** File description:
** every letter in lowercase
*/

#include "my.h"

char *my_strlowcase(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
