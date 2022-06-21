/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** ................
*/

int my_compute_power_rec(int nb, int p)
{
    long int nb1 = nb;
    if (p == 0)
        return 1;
    else if (p < 0)
        return 0;
    else
        return nb1 * my_compute_power_rec(nb1, p - 1);
}
