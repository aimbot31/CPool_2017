/*
** EPITECH PROJECT, 2017
** fiinal-stumper
** File description:
** final_stumper
*/

#include <unistd.h>
#include "include/my.h"
#define BUFF_SIZE (4096)

int verif(s_rush *rush, char *str)
{
	int *res = malloc(sizeof(int) * 6);
	int i = 0;

	i = i + my_check_rush1(rush, str);
	i = i + my_check_rush2(rush, str);
	i = i + my_check_rush3(rush, str);
	i = i + my_check_rush4(rush, str);
	i = i + my_check_rush5(rush, str);
	rush->nb_rush = i;
	return (i);
}

void display(s_rush *rush)
{
	if (rush->nb_rush == 6)
		display2(rush);
	else {
		my_putstr("[rush1-");
		my_put_nbr(rush->nb_rush);
		my_putstr("] ");
		my_put_nbr(rush->nbx);
		my_putchar(' ');
		my_put_nbr(rush->nby);
		my_putchar('\n');
	}
}

void display2(s_rush *rush)
{
	my_putstr("[rush1-3] ");
	my_put_nbr(rush->nbx);
	my_putchar(' ');
	my_put_nbr(rush->nby);
	my_putstr(" || ");
	my_putstr("[rush1-4] ");
	my_put_nbr(rush->nbx);
	my_putchar(' ');
	my_put_nbr(rush->nby);
	my_putstr(" || ");
	my_putstr("[rush1-5] ");
	my_put_nbr(rush->nbx);
	my_putchar(' ');
	my_put_nbr(rush->nby);
	my_putchar('\n');
}

int main()
{
	char buff[BUFF_SIZE + 1];
	int offset;
	int len;

	offset = 0;
	while ((len = read(0, buff + offset, BUFF_SIZE - offset )) > 0)
		offset = offset + len;
	buff[offset] = '\0';
	if (len < 0)
		return (84);
	if (check_errors(buff) == 84)
		return (84);
	return (0);
}
