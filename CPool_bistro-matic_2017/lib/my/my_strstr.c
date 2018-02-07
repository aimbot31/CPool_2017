/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** strstr function
*/

#include <stdlib.h>
#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
	unsigned int i = 0;
	signed int y = 0;
	signed int count = 0;

	if (my_strlen(to_find) > my_strlen(str))
		return (NULL);
	while (str[i] != '\0') {
		y = 0;
		count = 0;
		while(to_find[y] != '\0' && str[i + y] == to_find[y]
		      && str[i + y] != '\0') {
			count++;
			y++;
		}
		if (count == my_strlen(to_find))
			return (&str[i]);
		i++;
	}
	return (NULL);
}
