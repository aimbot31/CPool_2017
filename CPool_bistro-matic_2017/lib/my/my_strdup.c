  /*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** allow memory and copy the given string in it
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *str)
{
	char *dest;
	signed int lg = my_strlen(str);

	dest = malloc(sizeof(char) * lg);
	if (dest == NULL)
		return (NULL);
	dest = my_strcpy(dest, str);
	return (dest);
}
