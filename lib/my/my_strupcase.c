/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** function that puts every letter of every word in it in uppercase
*/
void my_putchar(char ch);

char *my_strupcase(char *str)
{
    int i = 0;
    char temp;
    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            temp = str[i] - 32;
            str[i] = temp;
        }
        i++;
    }
    return str;
}
