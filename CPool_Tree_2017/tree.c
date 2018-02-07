/*
** EPITECH PROJECT, 2017
** tree
** File description:
** display a tree
*/

void tree(int size)
{
	int last_l = 0;
	int i = 0;
	int decal = 0;
	int next_l = 0;

	last_l = recup_last_line(size) / 2;
	for (i;i < size;i++) {
		next_l = draw_cone(last_l, 4 + i, decal, next_l - decal);
		if ((i+4) % 2) {

		} else
			decal = decal + 2;
	}
	draw_tronc(size, last_l);
}

void draw_tronc(int size, int last_l)
{
	int i = 0;
	int nb = 0;
	int diviseur = 0;

	diviseur = size / 2;
	if (size % 2)
		nb = size;
	else
		nb = size + 1;
	for (i; i < size;i++) {
		if (size == i)
			affiche(last_l-diviseur, '|', nb, 0);
		else
			affiche(last_l-diviseur, '|', nb, 1);
	}
}

int draw_cone(int spc, int floor, int iii, int line)
{
	int i = 0;
	int nb_line = 0;
	int decal = 0;

	if (line == 0)
		nb_line++;
	for (i;i < floor;i++) {
		decal = (line/2)+i;
		affiche(spc - decal, '*', nb_line+line, 1);
		nb_line = nb_line + 2;
	}
	nb_line = nb_line-2;
	return (nb_line+line);
}

void affiche(int spc, char e, int nbr, int new)
{
	int i = 0;

	for (i;i < spc;i++) {
		my_putchar(' ');
	}
	i = 0;
	for (i;i < nbr;i++) {
		my_putchar(e);
	}
	if (new == 1)
		my_putchar('\n');
}

int recup_last_line(int size)
{
	int i = 2;
	int saut = 6;
	int nb_ast = 7;

	for (i;i <= size;i++) {
		if (i % 2) {
			saut = saut + 2;
		}
		nb_ast = saut + nb_ast;
	}
	return (nb_ast);
}

int main()
{
	tree(atoi(6));
}
