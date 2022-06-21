/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** function that displays the number given as a parameter
*/

void my_putchar(char ch);

int check_zer(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        check_zer(nb / -10);
        my_putchar((nb % 10) * -1 + '0');
    }
    if (nb > 0) {
        check_zer(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    return (0);
}

int my_put_nbr(int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    check_zer(nb);
    return (0);
}
