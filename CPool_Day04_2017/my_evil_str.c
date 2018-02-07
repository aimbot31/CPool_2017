/*
** EPITECH PROJECT, 2017
** my_evil_str
** File description:
** Desc
*/

#include <string.h>

char *my_evil_str(char *str)
{
	int i = 0;
	int ii = 0;
	int e = 0;
	char *z = str;
	char temp;

	while (str[i] != '\0') {
		i++;
	}
	i--;
	e = i / 2;
	while (i > e) {
		temp = str[ii];
		z[ii] = str[i];
		z[i] = temp;
		ii++;
		i--;
	}
	return (z);
}
