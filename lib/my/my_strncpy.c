/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** function that copies n characters from a string into another
*/

void my_putchar(char ch);

int my_strlen(char const *src);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i != n) {
        if (i >= my_strlen(src))
            dest[i] = '\0';
        else
            dest[i] = src[i];
        i++;
    }
    return dest;
}
