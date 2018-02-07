/*
** EPITECH PROJECT, 2017
** my_getchar
** File description:
** Return number of char in a string
*/

int my_getchar(char const *s1)
{
	int i = 0;
	int nb = 0;

	while (s1[i] != '\0') {
		if (s1[i] >= 65 && s1[i] <= 90)
			nb = nb + 1;
		else if (s1[i] >= 97 && s1[i] <= 122)
			nb = nb + 1;
		i = i + 1;
	}
	return (nb);
}
