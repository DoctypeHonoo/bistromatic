/*
** EPITECH PROJECT, 2021
** my_sort_int_array.c
** File description:
** function that sorts an integer array in ascending order
*/

void my_sort_int_array(int *array, int size)
{
    char temp;
    int i = 0;
    while (size != '\0') {
        size++;
    }
    while (array[i] != '\0') {
        if (array[i] < array[i + 1]) {
            temp = array[i + 1];
            array[i + 1] = array[i];
            array[i] = temp;
        }
        i++;
    }
    return;
}
