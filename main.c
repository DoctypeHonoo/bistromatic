/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** bistro main
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromatic.h"
#include "my.h"

static void check_common_char(char const *ops, char const *base)
{
    int i = 0;
    int j = 0;
    while (i != my_strlen(ops)) {
        while (j != my_strlen(base)) {
            if (ops[i] == base[j]) {
                my_putstr(SYNTAX_ERROR_MSG);
                exit(EXIT_OPS);
            }
            j++;
        }
        i++;
        j = 0;
    }
}

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return expr;
}

static void check_ops(char const *ops)
{
    int i = 0;
    int j = 0;
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
    while (i != my_strlen(ops)) {
        while (j != my_strlen(ops)) {
            if (ops[i] == ops[j] && i != j) {
                my_putstr(SYNTAX_ERROR_MSG);
                exit(EXIT_OPS);
            }
            j++;
        }
        i++;
        j = i + 1;
    }
}

static void check_base(char const *b)
{
    int i = 0;
    int j = 0;
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
    while (i != my_strlen(b)) {
        while (j != my_strlen(b)) {
            if (b[i] == b[j] && i != j) {
                my_putstr(SYNTAX_ERROR_MSG);
                exit(EXIT_BASE);
            }
            j++;
        }
        i++;
        j = i + 1;
    }
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+_*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    check_common_char(av[2], av[1]);
    size = my_atoi(av[3]);
    expr = get_expr(size);
    my_putstr(eval_expr(av[1], av[2], expr, size));
    return (EXIT_SUCCESS);
}
