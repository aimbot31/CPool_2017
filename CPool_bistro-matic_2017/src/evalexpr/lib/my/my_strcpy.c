/*
** EPITECH PROJECT, 2017
** strcpy
** File description:
** strcpy
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
	int i = 0;

	dest[0] = '(';
	while (src[i] != '\0') {
		dest[i+1] = src[i];
		i = i + 1;
	}
	dest[i+1] = ')';
	return (dest);
}
