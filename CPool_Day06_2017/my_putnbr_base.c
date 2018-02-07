/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** Desc
*/

int my_putnbr_base(int nbr, char const *base)
{
	int nb2 = 0;
	int base_nb = my_strlen(base);

	if (nbr < 0) {
		my_putchar('-');
		nbr = nbr * (-1);
	}
	if (nbr >= 10) {
		nb2 = nbr % base_nb;
		nbr = nbr / base_nb;
		my_putnbr_base(nbr, base);
		my_putchar(base[nb2]);
	}
	if (nbr < 10) {
		my_putchar(base[nbr%base_nb]);
	}
	return (0);
}

int main()
{
	my_putnbr_base(15, "01");
}
