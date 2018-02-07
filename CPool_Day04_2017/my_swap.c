/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** swap two numbers
*/

void my_swap (int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
