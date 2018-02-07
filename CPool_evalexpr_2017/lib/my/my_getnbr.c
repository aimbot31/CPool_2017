/*
** EPITECH PROJECT, 2017
** getnbr
** File description:
** getnbr
*/

#include "../../include/my.h"

char nb_sign(char const *nbr)
{
	int i = 0;
	int add = 0;
	int sous = 0;

	while (nbr[i] == '-' || nbr[i] == '+') {
		if (nbr[i] == '+')
			add = 1;
		if (nbr[i] == '-')
			sous = sous + 1;
		i = i + 1;
	}
	if (sous % 2 == 1 && add == 1)
		return ('-');
	if (sous % 2 == 0 && add == 1)
		return ('+');
	if (sous % 2 == 1 && add == 0)
		return ('-');
	if (sous % 2 == 0 && add == 0)
		return ('+');
	return (0);
}

int my_getnbr(char const *str)
{
	int i = 0;
	int s = 0;
	int trans = 0;
	int tmp = 0;
	char sign = nb_sign(str);

	while (str[i] == '-' || str[i] == '+')
		i = i + 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		trans = str[i] - 48;
		tmp = trans * 10;
		s = s * 10 + trans;
		i = i + 1;
	}
	if (sign == '-')
		s = s * -1;
	return (s);
}

int my_getnbr2(char const *str)
{
	int i = 0;
	int s = 0;
	int trans = 0;
	int tmp = 0;
	char sign = nb_sign(str);

	while ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
		i = i + 1;
	while (str[i] == '-' || str[i] == '+')
		i = i + 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		trans = str[i] - 48;
		tmp = trans * 10;
		s = s * 10 + trans;
		i = i + 1;
	}
	if (sign == '-')
		s = s * -1;
	return (s);
}
