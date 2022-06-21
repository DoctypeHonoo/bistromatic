/*
** EPITECH PROJECT, 2021
** my_strlowercase.c
** File description:
** function that puts every letter
** of everyword in it in lowercase
*/

void my_putchar(char ch);

char *my_strlowcase(char *str)
{
    int i = 0;
    char temp;
    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            temp = str[i] + 32;
            str[i] = temp;
        }
        i++;
    }
    return str;
}
