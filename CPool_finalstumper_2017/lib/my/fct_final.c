/*
** EPITECH PROJECT, 2017
** fiinal-stumper
** File description:
** final_stumper
*/

#include "../../include/my.h"

int diff_char(char *str)
{
	int compt1 = 0;

	while (str[compt1] != '\0') {
		if (str[0] != str[compt1] && str[compt1] != '\n')
			return (0);
		compt1 = compt1 + 1;
	}
	if (str[0] == '*')
		return (1);
	else if (str[0] == 'B')
		return (2);
	return (0);
}

int nb_x(char *str)
{
	int compt1 = 0;
	int nb = 0;

	while (str[compt1] != '\0') {
		if (str[compt1] == '\n')
			return (nb);
		nb = nb + 1;
		compt1 = compt1 + 1;
	}
	return (nb);
}

int check_spaces(s_rush *rush, char *str, char a, int start)
{
	int x = rush->nbx;
	int y = rush->nby;
	int i = start;

	if (str[start] != a || str[start + x - 1] != a)
		return (0);
	i = i + 1;
	while (i <= start + (x - 2)) {
		if (str[i] != ' ') {
			my_putchar(str[i]);
			return (0);
		}
		i = i + 1;
	}
	return (1);
}

void my_putchar(char c)
{
	write(1, &c, 1);
}

int nb_y(char *str)
{
	int i = 0;
	int nb = 0;

	while (str[i] != '\0') {
		if (str[i] == '\n')
			nb = nb + 1;
		i = i + 1;
	}
	return (nb);
}
