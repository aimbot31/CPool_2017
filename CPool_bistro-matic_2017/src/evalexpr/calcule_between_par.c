/*
** EPITECH PROJECT, 2017
** Functions usefull
** File description:
** desc
*/

#include "include/my.h"

char *transform_str(char *str)
{
	int i = 1;
	int j = 0;
	char *str2 = malloc(sizeof(char) * my_strlen(str));

	while(i < my_strlen(str)) {
		str2[j] = str[i];
		i = i + 1;
		j = j + 1;
	}
	str2[j - 1] = '+';
	return (str2);
}

int priority_calcul(t_list *list)
{
	t_list *mv = malloc(sizeof(t_list));
	int result = 0;

	mv = list;
	while (mv->prev != NULL) {
		if (mv->sig == '*' || mv->sig == '/' || mv->sig == '%') {
			mv->prev->nb = mulmoddiv(mv->nb, mv->sig, mv->prev->nb);
			mv->nb = "0\0";
			mv->sig = '+';
		}
		mv = mv->prev;
	}
	while (mv->next != NULL)
		mv = mv->next;
	result = secondary_calcul(mv);
	return (result);
}

char *mulmoddiv(char *nb1, char sign, char *nb2)
{
	char *result = malloc(sizeof(char) * (my_strlen(nb1) + my_strlen(nb2)));

	if (sign = '*')
		result = inf_mult(nb1, nb2);
	if (sign = '/')
		result = init_struct_div(nb1, sign, nb2);
	if (sign = '%')
		result = init_struct_modt(nb1, sign, nb2);
	return (result);
}

char *add_sous(char *nb1, char sign, char *nb2)
{
	char *result = malloc(sizeof(char) * (my_strlen(nb1) + my_strlen(nb2)));

	if (sign = '-')
		result = init_struct_sous(nb1, sign, nb2);
	if (sign = '+')
		result = init_struct_add(nb1, sign, nb2);	
	return (result);
}
int secondary_calcul(t_list *list)
{
	t_list *mv = malloc(sizeof(t_list));
	int i = 0;
	int result = 0;

	mv = list;
	while (mv->prev != NULL) {
		mv->prev->nb = add_sous(mv->nb, mv->sig, mv->prev->nb);
		mv->nb = 0;
		mv->sig = '+';
		mv = mv->prev;
	}
	result = mv->nb;
	return (result);
}
