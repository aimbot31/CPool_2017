/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	for (i;i < n;i++) {
		dest[i] = src[i];
	}
	return (dest);
}
