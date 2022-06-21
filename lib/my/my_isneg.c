/*
** EPITECH PROJECT, 2021
** my_print_digits.c
** File description:
** fuction taht displays either N
** if the integer passed as parameter is negative or,
** if positive or null
*/

void my_putchar(char);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');

    return 0;
}
