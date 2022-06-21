/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** function that concatenates n characters
** of the src string to the end of the dest string
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    while (dest[i] != '\0')
        i++;
    int l = 0;
    while (l != nb + 1 && src[l] != '\0') {
        dest[i] += src[l];
        l++;
        i++;
    }
    return dest;
}
