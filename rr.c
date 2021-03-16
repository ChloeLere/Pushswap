/*
** EPITECH PROJECT, 2020
** rr
** File description:
** take the last element and move in first pos
*/

#include "include/my.h"

void rra(t_list l_a)
{
    t_list_element *temp = l_a->end;

    if (l_a != NULL)
        l_a = rm_element_end(l_a);
    l_a = add_element_first(l_a, temp->data);
}

void rrb(t_list l_b)
{
    t_list_element *temp = l_b->end;

    if (l_b != NULL)
        l_b = rm_element_end(l_b);
    l_b = add_element_first(l_b, temp->data);
}

void rrr(t_list l_a, t_list l_b)
{
    rra(l_a);
    rrb(l_b);
}
