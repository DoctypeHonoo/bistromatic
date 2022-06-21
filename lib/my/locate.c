/*
** EPITECH PROJECT, 2021
** B-CPE-101-MPL-1-1-bistromatic-hippolyte.aubert
** File description:
** locate
*/

#include "../../include/my.h"

int locate(char to_find, char const *str)
{
    int i = 0;

    while (i != my_strlen(str)) {
        if (str[i] == to_find)
            return i;
        i++;
    }
    return 0;
}
