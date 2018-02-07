/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** get string length
*/

#include "my.h"

int my_strlen(char const *str)
{
	unsigned int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}
