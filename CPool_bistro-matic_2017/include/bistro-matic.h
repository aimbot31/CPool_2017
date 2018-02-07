/*
** EPITECH PROJECT, 2017
** includes
** File description:
** desc
*/

#ifndef BISTRO_MATIC_H_
#define BISTRO_MATIC_H_

#define VAL(x) (x - '0')
#define VALL(x) ((x) >= '0' ? (x) - '0' : (x))
#define ASCII(x) (x + '0')

#define OP_OPEN_PARENT_IDX 0
#define OP_CLOSE_PARENT_IDX 1
#define OP_PLUS_IDX 2
#define OP_SUB_IDX 3
#define OP_NEG_IDX 3
#define OP_MULT_IDX 4
#define OP_DIV_IDX 5
#define OP_MOD_IDX 6

#define EXIT_USAGE 84
#define EXIT_BASE 84
#define EXIT_SIZE_NEG 84
#define EXIT_MALLOC 84
#define EXIT_READ 84
#define EXIT_OPS 84
#define EXIT_SUCCESS 0

#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG "error"

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct s_mult s_mult;
struct s_mult
{
	char *result;
	int carry;
	int temp;
	int i;
	int j;
	int k;
	int lop1;
	int lop2;
};

typedef struct s_sub s_sub;
struct s_sub
{
	char *result;
	char *str1;
	char *str2;
	int i;
	int k;
	int lop1;
	int lop2;
};

void do_ascii_sub(s_sub *);
char *inf_sub(char *, char *);
char *inf_mult(char *, char *);
void my_putchar(char);
int my_strlen(char *);
char *my_revstr(char *);
char *prepare_memory_mult(int, int);
char *prepare_memory_sub(int, int);
void do_sub(char *, char *, s_sub *);
void init_struct_sub(char *, char *, s_sub *);
char *inf_sub(char *, char *);
void do_ascii_mult(s_mult *);
void init_struct_mult(s_mult *, char *, char *);
void help(void);
void check_base(char const *);
char *get_expr(unsigned int);

#endif /* BISTRO_MATIC_H_ */
