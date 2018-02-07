/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** copy n char from a string to another
*/

#include "my.h"

char *my_strncpy(char *dest, char const *str, int n)
{
	signed int i = 0;

	while (str[i] != '\0' && i < n) {
	        dest[i] = str[i];
	        i++;
	}
	if (n > i)
		dest[i] = '\0';
	return (dest);
}
