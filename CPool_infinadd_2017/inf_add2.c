/*
** EPITECH PROJECT, 2017
** inf_add.c
** File description:
** desc
*/

#include "include/my.h"
#define VAL(x) (x - '0')
#define ASCII(x) (x + '0')

int check_minus(char *str)
{
	int i = 0;

	while(str[i] == '+' || str[i] == '-')
		i = i + 1;
	if (i == 0)
		i = 1;
	else if (str[i - 1] == '+')
		i = i + 1;
	return (i - 1);char str[1];
	
}

int prepare_memory(int i, int j)
{
	if(i > j)
		return (malloc(i + 1));
	else if(j > i)
		return (malloc(j + 1));
	if(i = j)
		return (malloc(i + 1));
}

int add(char *op1, char *op2)
{
	char *result;
	int carry = 0;
	int temp = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	op1 = op1 + check_minus(op1);
	op2 = op2 + check_minus(op2);
	i = my_strlen(op1) - 1;
	j = my_strlen(op2) - 1;
	result = prepare_memory(i, j);
	while(i >= 0 || j >= 0) {
	        if (i < 0)
			temp = VAL(op2[j]) + carry;
		else if (j < 0)
			temp = VAL(op1[i]) + carry;
		else
			temp = VAL(op1[i]) + VAL(op2[j]) + carry;
		carry = 0;
		carry = temp / 10;
		result[k] = ASCII(temp % 10);
		i = i - 1;
		j = j - 1;
		k = k + 1;
	}
	if(carry > 0)
		result[k] = ASCII(carry);
	printf("%s", my_revstr(result));
}

int add_neg(char *op1, char *op2, int i, int j)
{
	char *result;
	int carry = 0;
	int temp = 0;
	int l = 0; 
	result = prepare_memory(i, j);
	while(i >= 0 || j >= 0) {
		if (i < 0)
			temp = VAL(op2[j]) + carry;
		else if(j < 0)
			temp = VAL(op1[i]) + carry;
		else
			temp = VAL(op1[i]) + VAL(op2[j]) + carry;
		carry = 0;
		carry = temp / 10;
		result[l] = ASCII(temp % 10);
		i = i - 1;
		j = j - 1;
		l = l + 1;
	}
	if(carry > 0)
		result[l] = ASCII(carry);
	//printf("%s", my_revstr(result));
}

int main()
{
        add("", "");
	return (0);
}
