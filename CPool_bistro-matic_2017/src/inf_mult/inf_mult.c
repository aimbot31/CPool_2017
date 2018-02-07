/*
** EPITECH PROJECT, 2017
** inf_mul
** File description:
** desc
*/

#include "../../include/bistro-matic.h"

char *inf_mult(char *op1, char *op2)
{
	s_mult mult;
	int i = -1;

	init_struct_mult(&mult, op1, op2);
	while (mult.i >= 0) {
		mult.j = mult.lop2;
		mult.carry = 0;
		i = i + 1;
		mult.k = i;
		while (mult.j >= 0) {
			do_mult(&mult, op1, op2);
		}
		if (mult.carry != 0) {
			mult.result[mult.k] += mult.carry;
			mult.carry = 0;
		}
		mult.i--;
	}
	mult.k++;
	mult.result[mult.k] = '\0';
	return (my_revstr(mult.result));
}

void init_struct_mult(s_mult *m, char *op1, char *op2)
{
	m->lop1 = my_strlen(op1) - 1;
	m->lop2 = my_strlen(op2) - 1;
	m->result = prepare_memory_mult(m->lop1, m->lop2 + 2);
	m->i = m->lop1;
}

void do_ascii_mult(s_mult *m)
{
	int i = 0;
	int k = 0;

	while (i < m->k) {
		k = m->result[i];
		m->result[i] = ASCII(k);
		i = i + 1;
	}
}

char *prepare_memory_mult(int i, int j)
{
	if (i > j)
		return (malloc(i + 2));
	else if (j > i)
		return (malloc(j + 2));
	if (i == j)
		return (malloc(i + 2));
}

void do_mult(s_mult *m, char *op1, char *op2)
{
	m->temp = VAL(op1[m->i]) * VAL(op2[m->j]) + m->carry;
	m->result[m->k] = m->result[m->k] + (m->temp % 10);
	if (m->result[m->k] >= 10) {
		m->result[m->k+1] = m->result[m->k+1] + (m->result[m->k] / 10);
		m->result[m->k] = m->result[m->k] % 10;
	}
	m->carry = m->temp / 10;
	m->j--;
	m->k++;
}
