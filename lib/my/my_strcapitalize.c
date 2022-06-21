/*
** EPITECH PROJECT, 2021
** my_strcapitalize.c
** File description:
** function that capitalizes the first letter of each word
*/

void my_putchar(char ch);

int verif_special_case(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-')
        return 1;
    return 0;
}

char *my_strcapitalize(char *str)
{
    int i = 1;
    int j = 0;
    int k = str[i];
    if (k >= 'a' && k <= 'z') {
        k -= 32;
        str[i] = k;
    }
    while (str[1] != '\0') {
        k = str[i];
        j = verif_special_case(str[i - 1]);
        if (j == 0 && k >= 'A' && k <= 'Z')
            k += 32;
        if (j == 1 && k >= 'a' && k <= 'z')
            k -= 32;
        str[i] = k;
        i++;
    }
    return (&str[0]);
}
