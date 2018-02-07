/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** copy a string in another
*/

#include "my.h"

char *my_strcpy(char *dest, char const *str)
{
	unsigned int i = 0;

	while (str[i] != '\0') {
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
