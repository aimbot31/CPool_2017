/*
** EPITECH PROJECT, 2017
** my_strcapitalize
** File description:
** Capitalize first letter of each word
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
	signed int i = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0') {
		if ((str[i] >= 'a' && str[i] <= 'z') && (
		(str[i - 1] < 'a' && str[i - 1] > 'Z') ||
		(str[i - 1] > 'z') || (str[i - 1] < 'A')))
			str[i] = str[i] - 32;
		if ((str[i] >= 'A' && str[i] <= 'Z') && (
		(str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
		(str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
		(str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
