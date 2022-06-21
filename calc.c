/*
** EPITECH PROJECT, 2021
** calc.c
** File description:
** Bistro matic
*/

#include "./include/my.h"
#include "./include/bistromatic.h"
#include <stdlib.h>

void counting_parantheses(char const *str)
{
    int count_opened = 0;
    int count_closed = 0;
    int i = 0;

    while (i != my_strlen(str)) {
        if (str[i] == '(')
            count_opened++;
        if (str[i] == ')')
            count_closed++;
        i++;
    }
    if (count_closed != count_opened) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
}

char *eval_expr(char const *base, char const *ops,
        char const *expr, unsigned int size)
{
    char *new_expr = malloc(sizeof(char) * size);
    char realBase[] = "0123456789";
    char realOps[] = "()+-*/%";
    unsigned int i;
    int index;

    for (i = 0; i != size; i++) {
        if (is_in(expr[i], base)) {
            index = locate(expr[i], base);
            new_expr[i] = realBase[index];
        } else if (is_in(expr[i], ops)) {
            index = locate(expr[i], ops);
            new_expr[i] = realOps[index];
        } else {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
    }
    counting_parantheses(new_expr);
    return my_itoa(parse_sum((char **) &new_expr));
}
