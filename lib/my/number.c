/*
** EPITECH PROJECT, 2021
** number.c
** File description:
** number
*/

int check_dig(char ch)
{
    return ch >= '0' && ch <= '9' ? 1 : 0;
}

int number(char **str_ptr)
{
    int sign = 1;
    int i = 0;
    int nb = 0;
    if (str_ptr[0][0] == '-') {
        sign *= -1;
        *str_ptr[0]++;
    }
    while (check_dig(str_ptr[0][0])) {
            nb *= 10;
            nb += str_ptr[0][i] - '0';
            *str_ptr[0]++;
    }
    return nb * sign;
}
