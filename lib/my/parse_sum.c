/*
** EPITECH PROJECT, 2021
** parse_sum.c
** File description:
** parse sum
*/
#include "../../include/bistromatic.h"
#include "../../include/my.h"
#include <stdlib.h>

int parse_term(char **str);

int parse_sum_add(int res, char **str)
{
    if (check_dig(str[0][1]) || str[0][1] == '-') {
        *str += 1;
        res += parse_term(str);
    } else {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
    return res;
}

int parse_sum(char **str)
{
    int res = parse_term(str);

    while (1) {
        if (**str == '+')
            res = parse_sum_add(res, str);
        else if (**str == '-') {
            *str += 1;
            res -= parse_term(str);
        } else
            break;
        return res;
    }
    return res;
}

