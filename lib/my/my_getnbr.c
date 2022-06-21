/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** function that returns a number,
** sent to a function as a string
*/

int check_sign(char const **str)
{
    int last_sign = 1;
    while (*str[0] == '-' || *str[0] == '+') {
        if (*str[0] == '-')
            last_sign = last_sign * -1;
        *str += 1;
    }
    return last_sign;
}

int max_min(int last_sign, int number, int digit)
{
    long int max = 2147483647;
    long int min = -2147483648;
    if (last_sign == 1) {
        if (number > max / 10)
            return 0;
        else if (number == max / 10 && max % 10 < digit)
            return 0;
        else
            return 1;
    }
    if (last_sign == -1) {
        if (number > min / -10)
            return 0;
        else if (number == min / -10 && min % 10 * -1 < digit)
            return 0;
        else
            return 1;
    }
}

int my_getnbr(char const *str)
{
    int number = 0;
    int i = 0;
    int sign = check_sign(&str);

    while (str[i] >= 48 && str[i] <= 57) {
        if (max_min(sign, number, str[i] - 48) == 0)
            return 0;
        else
            number = number * 10 + str[i] - 48;
        i++;
    }
    return number * sign;
}
