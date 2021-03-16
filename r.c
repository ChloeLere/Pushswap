/*
** EPITECH PROJECT, 2020
** r
** File description:
** take the first element move in last
*/

#include "include/my.h"

void ra(t_list l_a)
{
    t_list_element *temp = l_a->begin;

    if (l_a != NULL)
        l_a = rm_element_first(l_a);
    l_a = add_element_end(l_a, temp->data);
}

void rb(t_list l_b)
{
    t_list_element *temp = l_b->begin;

    if (l_b != NULL)
        l_b = rm_element_first(l_b);
    l_b = add_element_end(l_b, temp->data);
}

void rr(t_list l_a, t_list l_b)
{
    ra(l_a);
    rb(l_b);
}
