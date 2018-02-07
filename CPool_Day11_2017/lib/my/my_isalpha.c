/*
** EPITECH PROJECT, 2017
** my_isalpha
** File description:
** Return if a string is in alpha
*/

int my_isalpha(char const *carac)
{
	if (carac[0] >= 'A' && carac[0] <= 'Z')
		return (1);
	else
		return (0);
}
