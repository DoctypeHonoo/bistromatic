/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** function that swap the content of two integers
*/

void my_putchar(char ch);
void my_swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
