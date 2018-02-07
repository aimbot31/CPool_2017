/*
** EPITECH PROJECT, 2017
** putnbrbase
** File description:
** putnbrbase
*/

#include "my.h"

/* char *get_new_base(char *signs, char *base) */
/* { */
/* 	int i = 0; */
/* 	int i_base = 0; */
/* 	char *get_base = malloc(sizeof(char) * */
/* 		(my_strlen(signs) + my_strlen(base))); */

/* 	while (base[i] != '\0') { */
/* 		get_base[i_base] = base[i]; */
/* 		i = i + 1; */
/* 		i_base = i_base + 1; */
/* 	} */
/* 	i = 0; */
/* 	while (signs[i] != '\0') { */
/* 		get_base[i_base] = signs[i]; */
/* 		i = i + 1; */
/* 		i_base = i_base + 1; */
/* 	} */
/* 	return (get_base); */
/* } */

/* char conv_norm_base(char expr, char *base) */
/* { */
/* 	int i = 0; */
/* 	char *norm_base = malloc(sizeof(char) * 18); */

/* 	my_putstr(base); */
/* 	my_putchar('\n'); */
/* 	norm_base = "0123456789()+-*\/%"; */
/* 	my_putstr(norm_base); */
/* 	my_putchar('\n'); */
/* 	my_putchar('\n'); */
/* 	while (base[i] != '\0') { */
/* 		if (expr == base[i]) { */
/* 			return(norm_base[i]); */
/* 		} */
/* 		i = i + 1; */
/* 	} */
/* 	return (0); */
/* } */

char *convert_calc_rev(char *base, char *expr)
{
	int i = 0;
	int i_base = 0;
	int r = 0;
	char *new_expr = malloc(sizeof(char) * my_strlen(expr));
	char *get_base = malloc(sizeof(char) * my_strlen(base));

	get_base = ("0123456789");
	while (expr[i] != '\0') {
		while (get_base[i_base] != '\0') {
			if (expr[i] == get_base[i_base]) {
				new_expr[r] = base[i_base];
				r = r + 1;
				i = i + 1;
			}
			i_base = i_base + 1;
		}
		i = i + 1;
	}
	my_putstr(new_expr);
	return (new_expr);
}

int main()
{
	convert_calc("ABCDEFGHIJ", "234");
}
