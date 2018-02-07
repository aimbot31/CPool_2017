/*
** EPITECH PROJECT, 2017
** cat
** File description:
** desc
*/

#include "../include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int cat(char const *file)
{
	int fd;
	char buffer[32];
	int size = 32;

	fd = open(file, O_RDONLY);
	if (fd == -1) {
		write(2, "cat: ", 5);
		my_putstr(file);
		write(2, ": No such file or directory\n", 28);
		return (84);
	}
	while (size == 32) {
		size = read(fd, buffer, 32);
		for (int i = 0; i < size; i += 1)
			my_putchar(buffer[i]);
	}
	close(fd);
}

int cat_argsless(void)
{
	char buffer[32];
	int size = 0;

	while (1) {
		size = read(0, buffer, 32);
		for (int i = 0; i < size; i += 1)
			my_putchar(buffer[i]);
	}
}

int main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		cat_argsless();
	while (i != argc) {
		cat(argv[i]);
		i = i + 1;
	}
}
