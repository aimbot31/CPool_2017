/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** Copy a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
	int i = 0;

	for (i;src[i];i++) {
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
