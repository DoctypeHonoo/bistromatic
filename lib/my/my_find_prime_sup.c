/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** function that returns the smallest prime
** number that is greater than, or equal to,
** the number given as a parameter
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int res = my_is_prime(nb);
    if (res == 0)
        return my_find_prime_sup(nb + 1);
    return nb;
}
