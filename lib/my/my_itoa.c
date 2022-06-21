/*
** EPITECH PROJECT, 2021
** my_atoi.c
** File description:
** char to int
*/

#include <stdlib.h>
#include "../../include/my.h"

int my_length_of_number(int nb)
{
    int i = 0;

    if (nb == 0)
        return 1;
    if (nb < 0) {
        nb = -nb;
        i++;
    }
    while (nb > 0) {
        i++;
        nb /= 10;
    }
    return i;
}

char *my_itoa(int res)
{
    int i = my_length_of_number(res) - 1;
    char *str = malloc(sizeof(char) * i + 1);
    int j = 0;

    str[i] = '\0';
    if (res < 0) {
        str[0] = '-';
        j++;
        res = -res;
    }
    while (i >= j) {
        str[i] = (res % 10) + '0';
        res /= 10;
        i--;
    }
    return str;
}
