/*
** EPITECH PROJECT, 2017
** match
** File description:
** Desc
*/

void my_putchar(char c)
{
	write(1, &c, 1);
}

int match(char const *s1, char const *s2)
{
	int j = my_strlen(s2);
	return (rec(s1, s2, j));
}

int rec(char const *s1, char const *s2, int nb)
{
	if (s1[0] == '\0' && s2[0] == '\0') {
		return (1);
	}
	if (s2[0] == '\0' && s1[0] != '\0') {
		return (rec(s1, s2-nb, nb));
	}
	if (s2[0] == '*' && s2[1] == '*') {
		return (rec(s1, s2+1, nb));
	}
	if (s1[0] == s2[0]) {
		return (rec(s1+1, s2+1, nb));
	}
	if (s2[0] == '*' && s1[0] != s2[1]) {
		return (rec(s1+1, s2, nb));
	}
	if (s2[0] == '*' && s1[0] == s2[1]) {
		return (rec(s1, s2+1, nb));
	}
	return (0);
}

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}

int main(void)
{
	char s1[] = "tototototototo";
	char s2[] = "*toto";
        my_putchar(match(s1, s2) + 48);
}
