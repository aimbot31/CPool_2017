/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** Desc
*/

int my_str_isupper(char const *str)
{
	int i = 0;

	if (str == "")
		return (1);
	while (str[i] != '\0') {
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
