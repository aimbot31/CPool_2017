/*
** EPITECH PROJECT, 2017
** rush1-2
** File description:
** Display a square on the screen
*/

void rush(int x, int y)
{
	int i = 0;
	int error = 84;

	error = errors(x, y);

	while (y > i && error == 0) {
		i = i + 1;
		if (x == 2 && y == 2) {
			my_putstr("/\\\n");
			my_putstr("\\/");
			i = y;
		} else {
			traitement(x, y, i);
		}
	}
}

int my_putstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
	return (0);
}

void traitement(int x, int y, int i)
{
	if (x == 1 || y == 1) {
		affichage(1, x, 0, ' ', ' ');
	} else  if (i == 1) {
		affichage(2, x, 0, '/', '\\');
	} else if (i == y) {
		affichage(2, x, 0, '\\', '/');
	} else {
		affichage(1, x, x-2, ' ', ' ');
	}
	my_putchar('\n');
}

void affichage(int sign, int nb, int spc, char char1, char char2)
{
	int i = 0;
	int ii = 0;

	if (sign == 2) {
		my_putchar(char1);
		nb -= 2;
	}
	for (i; i < nb; i++) {
		my_putchar('*');
		if (spc > 0) {
			while (ii < spc) {
				ii = ii + 1;
				my_putchar(' ');
			}
			my_putchar('*');
			i = nb;
		}
	}
	if (sign == 2) {
		my_putchar(char2);
	}
}

int errors(int x, int y)
{
	if (x < 1 || y < 1) {
		write(2, "Invalid size\n", 13);
		return (84);
	}
	if (x > 2147483647 || y > 2147483647) {
		write(2, "Invalid size\n", 13);
		return (84);
	}
	return (0);
}
