/*
** EPITECH PROJECT, 2017
** inf_add 2
** File description:
** desc
*/

int my_is_num(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != 0) {
		if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-' || s[i] == '+')
			j++;
		else
			return (0);
		i++;
	}
	return (1);
}
