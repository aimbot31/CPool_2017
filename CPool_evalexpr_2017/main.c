/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include "include/my.h"

char *my_strcat(char *dest, char const *src)
{
	int i = 0;
	int j = 0;

	j = my_strlen(dest);
	while (src[i] != '\0') {
		dest[j+i] = src[i];
		i++;
	}
	dest[j+i] = '\0';
	return (dest);
}

void init_struct(eval *v, char *str)
{
	v->j = 0;
	v->l = my_strlen(str) - 1;
	v->k = 0;
	v->s1 = malloc(v->l + 2);
}

int count_op(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		if (my_is_ope(str[i]) > 0)
			j = j + 1;
		i = i + 1;
	}
	return (j);
}

int eval_expr(char *str)
{
	eval v;

	v.str2 = malloc(my_strlen(str) * sizeof(char) + 2);
	v.str2 = my_strcpy(v.str2, str);
	while (count_op(v.str2) > 0) {
		init_struct(&v, v.str2);
		found_para(&v, v.str2);
		separe(&v, v.str2);
		replace_str(initialize_list(v.s1), &v);
	}
	return (my_getnbr2(v.str2));
}

int main(int ac, char **av)
{
	if (ac == 2) {
		my_put_nbr(eval_expr(av[1]));
		my_putchar('\n');
		return (0);
	}
	return (84);
}
