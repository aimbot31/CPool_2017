/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** copy n char from a string to another
*/

char *my_strncpy2(char *dest, char const *str, int n, int start)
{
	signed int i = 0;

	while (str[start + i] != '\0' && (start + i) < n) {
	        dest[i] = str[start + i];
	        i++;
	}
	if (n > i)
		dest[i] = '\0';
	return (dest);
}
