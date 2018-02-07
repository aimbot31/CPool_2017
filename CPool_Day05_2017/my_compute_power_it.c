/*
** EPITECH PROJECT, 2017
** my_compute_power_it
** File description:
** desc
*/

int my_compute_power_it(int nb, int p)
{
	int result = 1;

	while (p >= 1) {
		result = result * nb;
		p = p - 1;
	}
	return (result);
}
