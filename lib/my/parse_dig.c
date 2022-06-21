/*
** EPITECH PROJECT, 2021
** parse_digits.c
** File description:
** parse digits
*/

int check_dig(char ch);

int number(char **str_ptr);

int parse_dig(char **str)
{
    int res = 0;
    if (check_dig(*str[0]) || **str == '-') {
        res = number(str);
        return res;
    }
    return 0;
}
