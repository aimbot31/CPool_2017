/*
** EPITECH PROJECT, 2017
** my_str_isprintable
** File description:
** Desc
*/

int my_str_isprintable(char const *str)
{
	int i = 0;

	if (str == "")
		return (1);
	while (str[i] != '\0') {
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
