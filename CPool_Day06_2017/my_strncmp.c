/*
** EPITECH PROJECT, 2017
** my_strncmp
** File description:
** Desc
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;

	while (i < n) {
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		if ((n - 1) == i)
			return (0);
		i++;
	}
}
