/*
** EPITECH PROJECT, 2017
** my_isneg
** File description:
** Determine si nombre est Negatif ou Positif ou null
*/

int my_isneg(int n)
{
	if (n < 0) {
		my_putchar('N');
	} else {
		my_putchar('P');
	}
	return (0);
}
