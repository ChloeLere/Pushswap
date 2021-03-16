/*
** EPITECH PROJECT, 2020
** p
** File description:
** take the first element from list and move it
*/

#include "include/my.h"

t_list pa(t_list l_a, t_list l_b)
{
    t_list_element *temp = l_b->begin;

    if (l_b != NULL)
        l_b = rm_element_first(l_b);
    l_a = add_element_first(l_a, temp->data);
    return (l_b);
}

t_list pb(t_list l_a, t_list l_b)
{
    t_list_element *temp = l_a->begin;

    if (l_a != NULL)
        l_a = rm_element_first(l_a);
    l_b = add_element_first(l_b, temp->data);
    return (l_b);
}
