/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** ******************
*/

int my_strncmp(char const * s1 ,char const * s2 ,int n)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
        if (i > 3)
            return 0;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    if (s1[i] == '\0')
        return -1;
    if (s2[i] == '\0')
        return 1;
    else
        return -1;
}
