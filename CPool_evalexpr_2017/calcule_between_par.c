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

	while (i < my_strlen(str)) {
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
			mv->prev->nb = do_op(mv->nb, mv->sig, mv->prev->nb);
			mv->nb = 0;
			mv->sig = '+';
		}
		mv = mv->prev;
	}
	while (mv->next != NULL)
		mv = mv->next;
	result = secondary_calcul(mv);
	return (result);
}

char *del_zero(char *str, int len, int check)
{
	int i = 0;
	int j = 0;
	char *new_str = malloc(sizeof(char) * len);

	while (str[i] == '0')
		i = i + 1;
	if (check == 1) {
		new_str[0] = '-';
		j = j + 1;
	}
	while (str[i] != '\0') {
		new_str[j] = str[i];
		i = i + 1;
		j = j + 1;
	}
	new_str[j] = '\0';
	return (new_str);
}

char *getchar(int nb, int len)
{
	char *str = malloc(sizeof(char) * len);
	int tmp = 0;
	int i = 0;
	int check = 0;

	if (nb < 0) {
		nb = nb * -1;
		check = 1;
	}
	while (i < len) {
		tmp = nb % 10;
		str[i] = tmp + 48;
		nb = nb / 10;
		i = i + 1;
	}
	str = my_revstr(str);
	str = del_zero(str, len, check);
	return (str);
}

int secondary_calcul(t_list *list)
{
	t_list *mv = malloc(sizeof(t_list));
	int i = 0;
	int result = 0;

	mv = list;
	while (mv->prev != NULL) {
		mv->prev->nb = do_op(mv->nb, mv->sig, mv->prev->nb);
		mv->nb = 0;
		mv->sig = '+';
		mv = mv->prev;
	}
	result = mv->nb;
	return (result);
}
