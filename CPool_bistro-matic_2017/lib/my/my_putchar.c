/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** write a char
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}
