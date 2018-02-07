/*
** EPITECH PROJECT, 2017
** inf_add.c
** File description:
** desc
*/

#include "include/my.h"

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

char *prepare_memory(int i, int j)
{
	if (i > j)
		return (malloc(i + 2));
	else if (j > i)
		return (malloc(j + 2));
	if (i == j)
		return (malloc(i + 2));
}

void inf_add(char *op1, char *op2, Variables *v)
{
	while (v->i >= 0 || v->j >= 0) {
		if (v->i < 0)
			v->temp = (v->n * VAL(op2[v->j])) + v->carry;
		else if (v->j < 0)
			v->temp = (v->m * VAL(op1[v->i])) + v->carry;
		if (v->i >= 0 && v->j >= 0)
			v->temp = (v->m * VAL(op1[v->i])) +
				(v->n * VAL(op2[v->j])) + v->carry;
		v->carry = 0;
		v->carry = v->temp / 10;
		v->result[v->k] = ASCII((v->temp * 1) % 10);
		v->i = v->i - 1;
		v->j = v->j - 1;
		v->k = v->k + 1;
	}
	if (v->carry > 0)
		v->result[v->k] = ASCII(v->carry);
	my_putstr(my_revstr(v->result));
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
	inf_add(op1, op2, v);
}

int main(int argc, char **argv)
{
	Variables v;
	
	if (argc != 3) {
		write(2, "Error : Too less args\n", 22);
		return (84);
	}
	if (my_strlen(argv[1]) == 0 || my_strlen(argv[2]) == 0) {
		write(2, "Error : No args\n", 16);
		return (84);
	}
	if (!my_is_num(argv[1]) || !my_is_num(argv[2])) {
		write(2, "Error : Only numbers\n", 21);
		return (84);
	}
	init_struct(&v, argv[1], argv[2]);
	return (0);
}
