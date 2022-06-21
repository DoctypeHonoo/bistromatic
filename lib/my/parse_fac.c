/*
** EPITECH PROJECT, 2021
** parse_fac.c
** File description:
** parse fac
*/

int number(char **str_ptr);
int parse_dig(char **str_ptr);
int parse_sum(char **str_ptr);

int parse_fac(char **str)
{
    int res;

    if (**str == '(') {
        *str += 1;
        res = parse_sum(str);
        *str += 1;
        return res;
    } else if (**str == '-' && *(*str + 1) == '(') {
        *str += 2;
        res = - parse_sum(str);
        *str += 1;
        return res;
    } else {
        return parse_dig(str);
    }
}
