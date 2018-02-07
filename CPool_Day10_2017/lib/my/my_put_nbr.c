/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** Desc
*/

int my_put_nbr(int nbr)
{
	int nbr2;

	if (nbr < 0) {
		my_putchar('-');
		nbr = nbr * (-1);
	}
	if (nbr >= 10) {
		nbr2 = nbr % 10;
		nbr = nbr / 10;
		my_put_nbr(nbr);
		my_putchar(nbr2 + 48);
	} else {
		my_putchar(nbr + 48);
	}
	return (0);
}
