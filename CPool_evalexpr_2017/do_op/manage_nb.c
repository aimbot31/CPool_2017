/*
** EPITECH PROJECT, 2017
** manage_sign_nbr
** File description:
** manage_signe_nb
*/

int get_sign(char *nbs)
{
	int sign = 0;

	if (nb_sign(nbs) == '-')
		sign = -1;
	else
		sign = 1;
	return (sign);
}

int loop_nb(char *nbs, int i)
{
	int i_nb = 0;
	char *nb = malloc(sizeof(char) * my_strlen(nbs));

	while (nbs[i] >= '0' && nbs[i] <= '9') {
		nb[i_nb] = nbs[i];
		i_nb = i_nb + 1;
		i = i + 1;
	}
	return (nb);
}
