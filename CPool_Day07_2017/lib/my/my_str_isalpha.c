/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** Desc
*/

int my_str_isalpha(char const *str)
{
	int i = 0;
	int z = 65;
	int y = 90;
	int x = 97;
	int w = 122;

	if (str = "")
		return (1);
	while (str[i] != '\0') {
		if (str[i] >= z && str[i] <= y || str[i] >= x && str[i] <= w)
			i++;
		else
			return (0);
	}
	return (1);
}
