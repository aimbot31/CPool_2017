/*
** EPITECH PROJECT, 2017
** rush2
** File description:
** Find wich langage is
*/

#include "include/my.h"

lettre lettres;

int count(char const *s1, char const *carac)
{
	int i = 0;
	int nb_carac = 0;
	int nb_s1 = 0;
	int is_alpha = 0;

	is_alpha = my_isalpha(carac);
	while (s1[i] != '\0') {
		if (is_alpha && (s1[i] == carac[0] + 32 || s1[i] == carac[0]))
			nb_carac = nb_carac + 1;
		if (!is_alpha && (s1[i] == carac[0] - 32 || s1[i] == carac[0]))
			nb_carac = nb_carac + 1;
		i = i + 1;
	}
	my_display(nb_carac, s1, carac);
}

void my_store(int nb_s1, char const *carac, float prob)
{
	int less = 65;

	if (carac[0] >= 'a' && carac[0] <= 'z')
		less = less + 32;
	lettres.value[carac[0] - less] = prob;
}

int my_display(int nb_carac, char const *s1, char const *carac)
{
	int nb_s1 = 0;
	float part1 = 0.0;
	int part2 = 0;

	my_putchar(carac[0]);
	my_putchar(':');
	my_put_nbr(nb_carac);
	my_putchar(' ');
	my_putchar('(');
	nb_s1 = my_getchar(s1);
	part1 = (((float)nb_carac / (float)nb_s1) * 100.0);
	part2 = ((int)(part1 * 100) % 100);
	my_put_nbr((int)part1);
	my_putchar('.');
	my_put_nbr(part2);
	my_putchar('%');
	my_putchar(')');
	my_putchar('\n');
	my_store(nb_s1, carac, ((float)nb_carac / (float)nb_s1)*100);
}

int main(int argc, char **argv)
{
	int i = 2;

	while (i != argc) {
		count(argv[1], argv[i]);
		i++;
	}
}
