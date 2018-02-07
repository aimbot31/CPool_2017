/*
** EPITECH PROJECT, 2017
** inf_add.c
** File description:
** desc
*/

#include "include/my.h"
#define VAL(x) (x - '0')
#define ASCII(x) (x + '0')

/* int check_higher(char *op1, char *op2) */
/* { */
/* 	int i = 0; */
/* 	int j = 0; */

/* 	if (op1[0] == '-') */
/* 		op1++; */
/* 	if (op2[0] == '-') */
/* 		op2++; */
/*         for(int i;op1[i] != '\0';i++) { */

/* 	} */

/* 	while (op2[j] != '\0') { */
/* 		j = j + 1; */
/* 	} */
/* } */

int check_minus(char *str)
{
	int i = 0;

	while (str[i] == '+' || str[i] == '-')
		i = i + 1;
	if (i == 0)
		i = 1;
	else if (str[i - 1] == '+')
		i = i + 1;
	return (i - 1);
}

int prepare_memory(int i, int j)
{
	if (i > j)
		return (malloc(i + 2));
	else if (j > i)
		return (malloc(j + 2));
	if (i == j)
		return (malloc(i + 2));
}

int add(char *op1, char *op2, Variables *v)
{
	while (v->i >= 0 || v->j >= 0) {
		if (v->i < 0)
			v->temp = (v->n * VAL(op2[v->j])) + v->carry;
		else if (v->j < 0)
			v->temp = (v->m * VAL(op1[v->i])) + v->carry;
		else
			v->temp = (v->m * VAL(op1[v->i])) +
				(v->n * VAL(op2[v->j])) + v->carry;
		v->carry = 0;
		v->carry = v->temp / 10;
		v->result[v->k] = ASCII((v->temp * 1) % 10);
		v->i = v->i - 1;
		v->j = v->j - 1;
		v->k = v->k + 1;
	}
	if(v->carry > 0)
		v->result[v->k] = ASCII(v->carry);
	printf("%s", my_revstr(v->result));
}

void init_struct(Variables *v, char *op1, char *op2)
{
	op1 = op1 + check_minus(op1);
	op2 = op2 + check_minus(op2);
	v->i = my_strlen(op1) - 1;
	v->j = my_strlen(op2) - 1;
	v->k = 0;
	v->carry = 0;
	v->temp = 0;
	v->m = 1;
	v->n = 1;
	v->result = prepare_memory(v->i, v->j);
	if (op1[0] == '-') {
		v->m = -1;
		op1++;
		v->i--;
	}
	if (op2[0] == '-') {
		v->n = -1;
		op2++;
		v->j--;
	}
	add(op1, op2, v);
}

int main(void)
{
	Variables v;
	init_struct(&v, "-54", "993");
	return (0);
}
