/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	unsigned int i = 0;
	unsigned int dest_lg = 0;
	int len = my_strlen(dest) + my_strlen(src);
	char *new_str = malloc(sizeof(char) * len);

	while (dest[i] != '\0') {
		new_str[dest_lg] = dest[i];
		i++;
		dest_lg++;
	}
	i = 0;
	while (src[i] != '\0') {
		new_str[dest_lg] = src[i];
		i++;
		dest_lg++;
	}
	new_str[dest_lg] = '\0';
	return (new_str);
}
