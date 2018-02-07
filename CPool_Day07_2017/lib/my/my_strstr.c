/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** Desc
*/

#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
	int i = 0;
	int j = 0;
	int length = 0;
	int temp = 0;
	int calcul = 0;

	length = my_strlen(to_find);
	while (str[i] != '\0') {
		temp = i;
		while (str[i] == to_find[j] && to_find[j] != '\0') {
			j++;
			i++;
		}
		calcul = i - j;
		if (length == j)
			return (str+calcul);
		i = temp + 1;
		j = 0;
	}
	return (NULL);
}
