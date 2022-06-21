/*
** EPITECH PROJECT, 2021
** parse_term.c
** File description:
** parse term
*/
#include "../../include/bistromatic.h"
#include "../../include/my.h"
#include <stdlib.h>

int number(char **str_ptr);
int parse_fac(char **str);

int parse_term_div(char **str, int res)
{
    if (str[0][1] == '0') {
        my_putstr(ERROR_MSG);
        exit(EXIT_USAGE);
    }
    *str += 1;
    res /= parse_fac(str);
    return res;
}

int parse_term_mult(char **str, int res)
{
    *str += 1;
    res *= parse_fac(str);
    return res;
}

int parse_term_mod(char **str, int res)
{
    if (str[0][1] == '0') {
        my_putstr(ERROR_MSG);
        exit(EXIT_USAGE);
    }
    *str += 1;
    res %= parse_fac(str);
    return res;
}

int parse_term(char **str)
{
    int res = parse_fac(str);
    int i = 0;

    while (**str == '/' || **str == '*' || **str == '%') {
        if (**str == '/') {
            res = parse_term_div(str, res);
        } else if (**str == '*') {
            res = parse_term_mult(str, res);
        } else {
            res = parse_term_mod(str, res);
        }
    }
    return res;
}
