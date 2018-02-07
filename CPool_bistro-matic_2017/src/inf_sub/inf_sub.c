/*
** EPITECH PROJECT, 2017
** Inf sub
** File description:
** desc
*/

#include "../../include/bistro-matic.h"

char *inf_sub(char *op1, char *op2)
{
	s_sub s;

	init_struct_sub(op1, op2, &s);
	s.str1 = malloc(s.k);
	s.str2 = malloc(s.k);
	my_strcpy(s.str1, op1);
	my_strcpy(s.str2, op2);
	s.str1 = my_revstr(s.str1);
	s.str2 = my_revstr(s.str2);
	while (s.k >= 0) {
		if (VALL(s.str1[s.i]) < VALL(s.str2[s.i])) {
			s.str1[s.i] = VALL(s.str1[s.i]) + 10;
			s.str2[s.i+1] = VALL(s.str2[s.i+1]) + 1;
		}
		s.result[s.i] = VALL(s.str1[s.i]) - VALL(s.str2[s.i]);
		s.i = s.i + 1;
		s.k = s.k - 1;
	}
	s.result[s.i] = '\0';
	do_ascii_sub(&s);
	printf("%s", my_revstr(s.result));
}

void do_ascii_sub(s_sub *s)
{
	int i = 0;
	int k = 0;

	while (i < s->i) {
		k = s->result[i];
		s->result[i] = ASCII(k);
		i = i + 1;
	}
}

void init_struct_sub(char *op1, char *op2, s_sub *s)
{
	s->lop1 = my_strlen(op1) - 1;
	s->lop2 = my_strlen(op2) - 1;
	s->i = 0;
	s->result = prepare_memory_sub(s->lop1, s->lop2);
	if (s->lop1 > s->lop2)
		s->k = s->lop1;
	else
		s->k = s->lop2;
}

char *prepare_memory_sub(int i, int j)
{
	if (i > j)
		return (malloc(i + 1));
	else if (j > i)
		return (malloc(j + 1));
	if (i == j)
		return (malloc(i + 1));
}
