/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** function that reverses a string
*/

char *my_revstr(char *str)
{
    int i = 0;
    int last = 0;
    while (str[last] != '\0') {
        last++;
    }
    last--;
    char temp;
    while (i < last) {
        temp = str[last];
        str[last] = str[i];
        str[i] = temp;
        i++;
        last--;
    }
    return str;
}
