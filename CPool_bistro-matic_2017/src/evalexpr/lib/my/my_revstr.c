/*
** EPITECH PROJECT, 2017
** revstr
** File description:
** revstr
*/

#include "../../include/my.h"

int my_len(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);

}

char *my_revstr(char *str)
{
	char tmp;
	int i = 0;
	int r = my_len(str) - 1;

	while (i <= r) {
		tmp = str[i];
		str[i] = str[r];
		str[r] = tmp;
		r--;
		i++;
	}
	return (str);
}
