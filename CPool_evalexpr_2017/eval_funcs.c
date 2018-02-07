/*
** EPITECH PROJECT, 2017
** Functions usefull
** File description:
** desc
*/

#include "include/my.h"

int my_is_ope(char c)
{
	if (c == '+' || c == '-' || c == '/' || c == '*' || c == '%')
		return (1);
	else
		return (0);
}

int which_sign(char c)
{
	if (c == '/' || c == '*' || c == '%')
		return (1);
	return (0);
}
