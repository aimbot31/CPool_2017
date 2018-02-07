/*
** EPITECH PROJECT, 2017
** myh
** File description:
** myh
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>

typedef struct s_list
{
	int i;
	int nb;
	char sig;
	struct s_list *next;
	struct s_list *prev;
} t_list;

typedef struct eval
{
	char *s1;
	char *str2;
	int l;
	int k;
	int j;
} eval;

typedef struct s_flist
{
	int r;
	int j;
	char *tmp;
} t_flist;

char nb_sign(char const *);
int my_getnbr(char const *);
int my_getnbr2(char const *);
void my_putchar(char);
void my_putstr(char const *);
int my_len(char *);
char *my_revstr(char *);
char *my_strcpy(char *, char const *);
int my_strlen(char const *);
void display(eval *);
int is_num(char);
int replace_str(char *, eval *);
char *my_strcat(char *, char const *);
void init_struct(eval *, char *);
int count_op(char *);
int eval_expr(char *);
int my_check_signs(eval *);
int my_calcul(eval *);
int separe(eval *, char *);
int found_para(eval *, char *);
int my_is_ope(char);
int wich_sign(char);
t_list *create_link(t_list *, int, char, int);
char *transform_str(char *);
int priority_calcul(t_list *);
char *del_zero(char *, int, int);
char *getchar(int, int);
char *initialize_list(char *);
void fill_list(t_list *, char *);
int secondary_calcul(t_list *);
void my_putchar(char);
int my_strlen(char const *);
char *my_strcpy(char*, char const *);

#endif /* MY_H_ */
