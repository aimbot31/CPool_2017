/*
** EPITECH PROJECT, 2017
** my_strcapitalize
** File description:
** desc
*/

char *my_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char *my_strcapitalize(char *str)
{
	int i = 1;
	int z = 96;
	int y = 123;
	
	str = my_strlowcase(str);
	if (str[i] >= 97 && str[i] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0') {
		if (str[i-1] > 31 && str[i-1] < 48 && str[i] > z && str[i] < y)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
