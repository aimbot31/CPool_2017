/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** concatenates two strings
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
	signed int i = 0;
	unsigned int dest_lg = my_strlen(dest);

	while (src[i] != '\0' && i < nb) {
		dest[dest_lg + i] = src[i];
		i++;
	}
	dest[dest_lg + i] = '\0';
	return (dest);
}
