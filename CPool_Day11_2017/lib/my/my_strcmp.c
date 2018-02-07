/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** desc
*/

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;

	while (s1) {
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
}
