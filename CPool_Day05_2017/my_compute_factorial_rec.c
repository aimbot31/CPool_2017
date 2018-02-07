/*
** EPITECH PROJECT, 2017
** my_compute_factorial_rec
** File description:
** desc
*/

int my_compute_factorial_rec(int nb)
{
	if (nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	return (nb * my_compute_factorial_rec(nb - 1));
}
