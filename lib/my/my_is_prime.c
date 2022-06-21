/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** function that returns 1 if the number is prime 0 if not
*/

int my_is_prime(int nb)
{
    int i = 2;
    if (nb <= 0 || (nb % 2 == 0 && nb != 2))
        return 0;
    while (i < nb / 2) {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}
