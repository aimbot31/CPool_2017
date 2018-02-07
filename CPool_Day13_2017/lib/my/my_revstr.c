/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** desc
*/

char *my_revstr(char *str)
{
	int i = 0;
	int ii = 0;
	int e = 0;
	char *z = str;
	char temp;

	while (str[i] != '\0') {
		i++;
	}
	i--;
	e = i / 2;
	while (i > e) {
		temp = z[ii];
		str[ii] = z[i];
		str[i] = temp;
		ii++;
		i--;
	}
	return (str);
}
