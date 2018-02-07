/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** desc
*/

typedef struct s_rush
{
	int nbx;
	int length;
	int nby;
	int nb_rush;
	int same_char;
	int stop;
} s_rush;

int check_errors(char *);
int my_check_rush1(s_rush *, char *);
int my_check_rush2(s_rush *, char *);
int my_check_rush3(s_rush *, char *);
int my_check_rush4(s_rush *, char *);
int my_check_rush5(s_rush *, char *);
int check_spaces(s_rush *, char *, char, int);
int my_put_nbr(int);
int my_putstr(char const *);
void my_putchar(char);
void jsp(int, s_rush *);
int diff_char(char *);
int nb_x(char *);
int nb_y(char *);
void init_struct(s_rush *, char *);
int verif(s_rush *, char *);
void display(s_rush *);
void display2(s_rush *);
