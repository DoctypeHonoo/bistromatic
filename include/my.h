/*
** EPITECH PROJECT, 2021
** my
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

void my_putchar(char ch);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int check_sign(char const **str);
int max_min(int last_sign, int number, int digit);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_put_nbr(int nb);
int check_zer(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
void my_sort_int_array(int *array, int size);
int check(char ch);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int special_case(char const *s1, char const *s2);
int normal_case(char const *s1, char const *s2);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp ( char const * s1 , char const * s2 , int n );
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int my_atoi(char *str);
char *my_itoa(int res);
int check_dig(char ch);
int number(char **str_ptr);
int parse_dig(char **str);
int parse_term(char **str);
int parse_fac(char **str);
int parse_sum(char **str);
int locate(char to_find, char const *str);
int is_in(char to_find, char const *str);

#endif /* !MY_H_ */
