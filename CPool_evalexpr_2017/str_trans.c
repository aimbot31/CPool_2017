/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include "include/my.h"

int replace_str(char *str, eval *v)
{
	int i = 0;
	int j = my_strlen(str);
	int z = v->k - v->j;

	while (str[i] != '\0') {
		v->str2[v->j+i] = str[i];
		i = i + 1;
	}
	while (i <= z) {
		v->str2[v->j+i] = 'r';
		i = i + 1;
	}
	if (v->str2[v->k] == ')')
		v->str2[v->k] = 'r';
	return (0);
}

int separe(eval *v, char *str)
{
	int i = 0;
	int temp = v->k - v->j;

	while (i <= temp) {
		v->s1[i] = str[v->j+i];
		i = i + 1;
	}
	v->s1[i] = '\0';
}

int found_para(eval *v, char *str)
{
	int i = 0;

	while (str[i] != 0) {
		if (str[i] == '(')
			v->j = i;
		if (str[i] == ')') {
			v->k = i;
			return (0);
		}
		i = i + 1;
	}
	return (0);
}
