/*
** EPITECH PROJECT, 2021
** my_atoi.c
** File description:
** char to int
*/

int my_atoi(char *str)
{
    int res = 0;
    int i = 0;
    int sign = 1;

    if (str[0] == '-') {
        sign *= -1;
        i += 1;
    }
    while (str[i] != '\0') {
        res *= 10;
        res += str[i] - '0';
        i++;
    }
    return (res * sign);
}
