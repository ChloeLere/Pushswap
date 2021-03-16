/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "include/my.h"

void sort_list(t_list l_a, int len)
{
    ra(l_a);
    my_printf("ra");
    if (len > 1)
        my_printf(" ");
}

void  bubble_sort_list(t_list l_a)
{
    int len = l_a->size;
    int len2 = len;
    t_list_element *temp = l_a->begin->next;

    for (; len  > 0; len--) {
        for (temp = l_a->begin->next, len2 = l_a->size; len2 > 1; len2--) {
            if (temp->data < l_a->begin->data) {
                sa(l_a);
                my_printf("sa ");
            }
            ra(l_a);
            my_printf("ra ");
            temp = temp->next;
        }
        sort_list(l_a, len);
    }
    my_printf("\n");
}

int test_sort(t_list l_a)
{
    int len = l_a->size;
    t_list_element *temp = l_a->begin->next;
    t_list_element *temp2 = l_a->begin;

    for (temp = l_a->begin->next, len = l_a->size; len > 1; len--) {
        if (temp->data < temp2->data) {
            return (0);
        }
        temp2 = temp;
        temp = temp->next;
    }
    my_printf("\n");
    return (1);
}

int main(int argc, char **argv)
{
    t_list l_a = NULL;
    int x = 1;

    if (argc <= 1) {
        write(2, "Error", 6);
        return (84);
    }
    if (argc == 2) {
        my_printf("\n");
        return (0);
    }
    if (test_flag(argc, argv, l_a) == 1)
        return (0);
    for (;argc > x; x++)
        l_a = add_element_end(l_a, my_getnbr(argv[x]));
    if (test_sort(l_a) == 1)
        return (0);
    bubble_sort_list(l_a);
    display_list(l_a, "la", 1);
    return (0);
}