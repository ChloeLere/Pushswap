/*
** EPITECH PROJECT, 2020
** show_statuses
** File description:
** shows the statuses of lists at each step
*/

#include "include/my.h"

void bubble_sort_v(t_list l_a, t_list l_b)
{
    int len = l_a->size;
    int len2 = len;
    t_list_element *temp = l_a->begin->next;

    for (; len  > 0; len--) {
        for (temp = l_a->begin->next, len2 = l_a->size; len2 > 1; len2--) {
            if (temp->data < l_a->begin->data) {
                sa(l_a);
                display_update(l_a, l_b, "sa");
            }
            ra(l_a);
            display_update(l_a, l_b, "ra");
            temp = temp->next;
        }
        ra(l_a);
        display_update(l_a, l_b, "ra");
    }
}

void display_update(t_list l_a, t_list l_b, char *move)
{
    my_printf("%s", move);
    display_list(l_a, "l_a", 2);
    display_list(l_b, "l_b", 2);
    my_printf("\n");
}

int test_flag(int argc, char **argv, t_list l_a)
{
    int x = 2;
    t_list l_b = NULL;

    if (argv[1][0] == '-' && argv[1][1] == 'v' && argc >= 2) {
        for (;argc > x; x++) {
            l_a = add_element_end(l_a, my_getnbr(argv[x]));
            l_b = add_element_end(l_b, 0);
        }
        if (test_sort(l_a) == 1) {
            display_list(l_a, "l_a", 1);
            display_list(l_b, "l_b", 2);
            return (1);
        }
        bubble_sort_v(l_a, l_b);
        my_printf("\n");
        return (1);
    } else
        return (0);
}