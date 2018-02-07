/*
** EPITECH PROJECT, 2017
** my_print_comb
** File description:
** Desc
*/

int my_print_comb(void)
{
	int first = 0;
	int second = 1;
	int third = 2;

	my_result(first, second, third);
	while (first <= 7) {
		while (second < 9) {
			while (third < 9) {
				third++;
				my_result(first, second, third);
			}
			second++;
			third = second;
		}
		first++;
		second = first;
	}
	return (0);
}

void my_result(int first_print, int second_print, int third_print)
{
	my_putchar(first_print + 48);
	my_putchar(second_print + 48);
	my_putchar(third_print + 48);
	if (first_print != 7) {
		my_putchar(',');
		my_putchar(' ');
	}
}
