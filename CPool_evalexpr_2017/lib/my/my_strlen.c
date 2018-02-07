/*
** EPITECH PROJECT, 2017
** strlen
** File description:
** strlen
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i = i + 1;
	}
	return (i);
}
