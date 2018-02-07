/*
** EPITECH PROJECT, 2017
** my_check_rush
** File description:
** desc
*/

#include "../../include/my.h"

int my_check_rush1(s_rush *rush, char *str)
{
	int i = 1;

	rush->stop = 1;
	if (str[0] != 'o' || str[rush->nbx-1] != 'o')
		return (0);
	while (i < rush->nbx-1) {
		if (str[i] != '-')
			return (0);
		i = i + 1;
	}
	i = 1;
	while (i <= rush->nby - 2 && rush->stop == 1 && rush->nby > 2) {
		rush->stop = check_spaces(rush, str, '|', (rush->nby + 1) * i);
		i = i + 1;
	}
	if (rush->stop == 0)
		return (0);
	if (str[rush->length-rush->nbx-1] != 'o' || str[rush->length-2] != 'o')
		return (0);
	return (1);
}

int my_check_rush2(s_rush *rush, char *str)
{
	int i = 1;

	rush->stop = 1;
	if (str[0] != '/' || str[rush->nbx-1] != '\\')
		return (0);
	while (i < rush->nbx-1) {
		if (str[i] != '*')
			return (0);
		i = i + 1;
	}
	i = 1;
	while (i <= rush->nby - 2 && rush->stop == 1 && rush->nby > 2) {
		rush->stop = check_spaces(rush, str, '*', (rush->nby + 1) * i);
		i = i + 1;
	}
	if (rush->stop == 0)
		return (0);
	if (str[rush->length-rush->nbx-1] != '\\' || str[rush->length-2] != '/')
		return (0);
	return (2);
}

int my_check_rush3(s_rush *rush, char *str)
{
	int i = 1;

	rush->stop = 1;
	if (str[0] != 'A' || str[rush->nbx-1] != 'A')
		return (0);
	while (i < rush->nbx-1) {
		if (str[i] != 'B')
			return (0);
		i = i + 1;
	}
	i = 1;
	while (i <= rush->nby - 2 && rush->stop == 1 && rush->nby > 2) {
		rush->stop = check_spaces(rush, str, 'B', (rush->nby + 1) * i);
		i = i + 1;
	}
	if (rush->stop == 0)
		return (0);
	if (str[rush->length-rush->nbx-1] != 'C' || str[rush->length-2] != 'C')
		return (0);
	return (3);
}

int my_check_rush4(s_rush *rush, char *str)
{
	int i = 1;

	rush->stop = 1;
	if (str[0] != 'A' || str[rush->nbx-1] != 'C')
		return (0);
	while (i < rush->nbx-1) {
		if (str[i] != 'B')
			return (0);
		i = i + 1;
	}
	i = 1;
	while (i <= rush->nby - 2 && rush->stop == 1 && rush->nby > 2) {
		rush->stop = check_spaces(rush, str, 'B', (rush->nby + 1) * i);
		i = i + 1;
	}
	if (rush->stop == 0)
		return (0);
	if (str[rush->length-rush->nbx-1] != 'A' || str[rush->length-2] != 'C')
		return (0);
	return (4);
}

int my_check_rush5(s_rush *rush, char *str)
{
	int i = 1;

	rush->stop = 1;
	if (str[0] != 'A' || str[rush->nbx-1] != 'C')
		return (0);
	while (i < rush->nbx-1) {
		if (str[i] != 'B')
			return (0);
		i = i + 1;
	}
	i = 1;
	while (i <= rush->nby - 2 && rush->stop == 1 && rush->nby > 2) {
		rush->stop = check_spaces(rush, str, 'B', (rush->nby + 1) * i);
		i = i + 1;
	}
	if (rush->stop == 0)
		return (0);
	if (str[rush->length-rush->nbx-1] != 'C' || str[rush->length-2] != 'A')
		return (0);
	return (5);
}
