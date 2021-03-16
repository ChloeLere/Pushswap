/*
** EPITECH PROJECT, 2020
** my
** File description:
** static library
*/
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int my_printf(char *s, ...);
int edit_add(char *str, va_list argv, int add);
int space_or_plus(char str, va_list argv, int add);
void display_all_char (char *str);
int add_zero_or_space_int(char *str, va_list argv, int add);
void check_string(char *type, va_list argv);
void check_int(char *type, va_list argv);
void check_char(char *type, va_list argv);
int check_other(char *type, va_list argv);
void convert(va_list argv, int base);
void convert_hexa_lower(va_list argv);
void convert_hexa_upper(va_list argv);
void my_putchar(char c);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr_pr(int nb);
void my_put_nbr_oct(int nb);
void my_put_nbr_uns(unsigned int nb);
void my_put_nbr_long(long nb);
double my_put_float(double nbr);
void my_put_short(short nb);
void display_p(char *str, va_list argv);
int add_zero_or_space(char *str, va_list argv, int add);
void space_char(va_list argv, int nbr);
void zero_or_space_int(char str, va_list argv, int nb_z);
int my_getnbr_with_i (char const *str, int i);
int my_nbrlen(int str);
void convert_hexa_lower_int(int nbr, va_list argv);
void convert_hexa_lower_long(unsigned long nbr, va_list argv);

typedef struct s_list_element
{
    int data;
    struct s_list_element *next;
    struct s_list_element *prev;
}t_list_element;

typedef struct s_list
{
    int size;
    struct s_list_element *begin;
    struct s_list_element *end;
}*t_list;

void  bubble_sort_list(t_list l_a);
void display_list(t_list list, char *name, int n);
t_list create_list(void);
int listlen(t_list list);
t_list add_element_end(t_list list, int nbr);
t_list add_element_first(t_list list, int nbr);
t_list rm_element_end(t_list list);
t_list rm_element_first(t_list list);
void rm_all(t_list list);
t_list pa(t_list l_a, t_list l_b);
t_list pb(t_list l_a, t_list l_b);
void sa(t_list l_a);
void sb(t_list l_b);
void sc(t_list l_a, t_list l_b);
void rrr(t_list l_a, t_list l_b);
void rrb(t_list l_b);
void rra(t_list l_a);
void ra(t_list l_a);
void rb(t_list l_b);
void rr(t_list l_a, t_list l_b);
void sort_list(t_list l_a, int len);
int test_flag(int argc, char **argv, t_list l_a);
void display_update(t_list l_a, t_list l_b, char *move);
void bubble_sort_v(t_list l_a, t_list l_b);
int test_sort(t_list l_a);
