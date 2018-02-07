/*
** EPITECH PROJECT, 2017
** do_op
** File description:
** do_op
*/

char signe(char *signe)
{
	if (signe[0] != '-' && signe[0] != '+' && signe[0] != '%' &&
		signe[0] != '/' && signe[0] != '*' )
		return (0);
	else
		return (signe[0]);
}

int numbers(char *nbs)
{
	int i = 0;
	int sign = 0;
	int i_nb = 0;
	int result = 0;
	char *nb = malloc(sizeof(char) * my_strlen(nbs));

	while (nbs[i] != '\0') {
		if  (nb[i] != '-' && nb[i] != '+' &&
			nbs[0] < '0' && nbs[0] > '9')
			return (0);
		i = i + 1;
	}
	i_nb = 0;
	sign = get_sign(nbs);
	while (nbs[i] == '+' || nbs[i] == '-')
		i = i + 1;
	nb = loop_nb(nbs, i);
	result = my_getnbr(nb) * sign;
	return (result);
}

int do_op(int nb1, char sign, int nb2)
{
	int result = 0;

	switch (sign) {
	case '-':
		result = nb1 - nb2;
		break;
	case '+':
		result = nb1 + nb2;
		break;
	case '*':
		result = nb1 * nb2;
		break;
	case '/':
		result = nb1 / nb2;
		break;
	case '%':
		result = nb1 % nb2;
		break;
	}
	return (result);
}
