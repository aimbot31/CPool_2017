/*
** EPITECH PROJECT, 2017
** functions usefull
** File description:
** esc
*/

#include "../../include/my.h"

void check_solo(int nbr, s_rush *rush)
{
	if (nbr == 1)
		rush->nb_rush = 2;
	else if(nbr == 2)
		rush->nb_rush = 6;
}

void init_struct(s_rush *rush, char *str)
{
	rush->stop = 1;
	rush->nb_rush = 0;
	rush->nbx = nb_x(str);
	rush->nby = nb_y(str);
	rush->same_char = diff_char(str);
	rush->length = my_strlen(str);
}

int check_errors(char *str)
{
	int i = 0;
	s_rush rush;
	int size_max = 0;

	init_struct(&rush, str);
	size_max = (rush.nbx * rush.nby + rush.nby);
	if (rush.length != size_max) {
		write(2, "none\n", 5);
		return (84);
	}
	check_solo(rush.same_char, &rush);
	my_check_rush2(&rush, str);
	if (rush.nb_rush == 0)
		rush.nb_rush = verif(&rush, str);
	if (rush.nb_rush == 0) {
		write(2, "none\n", 5);
		return (84);
	}
	display(&rush);
	return (0);
}
