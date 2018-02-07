/*
** EPITECH PROJECT, 2017
** my_realloc
** File description:
** realloc a char *
*/

#include "my.h"

char	*my_realloc(char *str, int size)
{
	char		*new = malloc(sizeof(char) * size);
	unsigned int	i = 0;

	while (str[i] != '\0') {
		new[i] = str[i];
		i = i + 1;
	}
	return (new);
}
