/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it
** File description:
** desc
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb > 12)
	    return (0);
    if (nb == 1)
	    return (1);
    if (nb < 0)
	    return (0);
    while (nb > 1) {
	result = result * nb;
	nb--;
    }
    return (result);
}
