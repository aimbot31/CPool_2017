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
	link->prev = new;
	new->next = link;
	new->prev = NULL;
	return (new);
}

char *initialize_list(char *str)
{
	int result = 0;
	t_list *list = malloc(sizeof(t_list));
	t_list *dep = malloc(sizeof(t_list));

	list->next = NULL;
	list->prev = NULL;
	list->nb = malloc(sizeof(char) * my_strlen(str));
	list->sig = '+';
	fill_list(list, transform_str(str));
	dep = list;
	while (dep->next != NULL) {
		dep = dep->next;
	}
	result = priority_calcul(dep);
	return (getchar(result, my_strlen(str)));
}

t_flist init_fill(char *str)
{
	t_flist result;

	result.r = 0;
	result.j = 1;
	result.tmp = malloc(sizeof(char) * my_strlen(str));
	return (result);
}

void fill_list(t_list *list, char *str)
{
	t_flist l = init_fill(str);

	for (int i = 0; str[i] != '\0'; i = i + 1) {
		l.r = 0;
		if (my_is_ope(str[i]) && (str[i+1] == 43 || str[i+1] == 45)) {
			while (str[i] == '+' || str[i] == '-') {
				l.tmp[l.r] = str[i];
				l.r = l.r + 1;
				i = i + 1;
			}
		}
		for (i; !my_is_ope(str[i]); i = i + 1) {
			l.tmp[l.r] = str[i];
			l.r = l.r + 1;
		}
		l.tmp[l.r] = '\0';
		list = create_link(list, l.tmp, str[i], l.j);
		l.j = l.j + 1;
	}
}
