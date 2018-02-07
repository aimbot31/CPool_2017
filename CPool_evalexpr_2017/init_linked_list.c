/*
** EPITECH PROJECT, 2017
** Functions usefull
** File description:
** desc
*/

#include "include/my.h"

t_list *create_link(t_list *link, int nb, char sign, int j)
{
	t_list *new = malloc(sizeof(*link));

	new->nb = nb;
	new->sig = sign;
	new->i = j;
	link->prev = new;
	new->next = link;
	new->prev = NULL;
	return (new);
}

char *initialize_list(char *str)
{
	int i = 0;
	int r = 0;
	int result = 0;
	t_list *list = malloc(sizeof(t_list));
	t_list *dep = malloc(sizeof(t_list));

	list->next = NULL;
	list->prev = NULL;
	list->nb = 0;
	list->sig = '+';
	list->i = 0;
	fill_list(list, transform_str(str));
	dep = list;
	while (dep->next != NULL) {
		dep = dep->next;
	}
	result = priority_calcul(dep);
	return (getchar(result, my_strlen(str)));
}

t_flist init_fill(char *s)
{
	t_flist result;

	result.r = 0;
	result.j = 1;
	result.tmp = malloc(sizeof(char) * my_strlen(s));
	return (result);
}

void fill_list(t_list *list, char *s)
{
	t_flist l = init_fill(s);

	for (int i = 0; s[i] != '\0'; i = i + 1) {
		l.r = 0;
		if (my_is_ope(s[i]) && (s[i + 1] == 43 || s[i + 1] == 45)) {
			while (s[i] == '+' || s[i] == '-') {
				l.tmp[l.r] = s[i];
				l.r = l.r + 1;
				i = i + 1;
			}
		}
		for (i; !my_is_ope(s[i]); i = i + 1) {
			l.tmp[l.r] = s[i];

			l.r = l.r + 1;
		}
		l.tmp[l.r] = '\0';
		list = create_link(list, my_getnbr(l.tmp), s[i], l.j);
		l.j = l.j + 1;
	}
}
