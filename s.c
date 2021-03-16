/*
** EPITECH PROJECT, 2020
** s
** File description:
** swap the first two elements
*/

#include "include/my.h"

void sa(t_list l_a)
{
    t_list_element *temp = l_a->begin;
    t_list_element *tempn = l_a->begin->next;

    if (l_a != NULL)
        l_a = rm_element_first(l_a);
    if (l_a != NULL)
        l_a = rm_element_first(l_a);
    l_a = add_element_first(l_a, temp->data);
    l_a = add_element_first(l_a, tempn->data);
}

void sb(t_list l_b)
{
    t_list_element *temp = l_b->begin;
    t_list_element *tempn = l_b->begin->next;

    if (l_b != NULL)
        l_b = rm_element_first(l_b);
    if (l_b != NULL)
        l_b = rm_element_first(l_b);
    l_b = add_element_first(l_b, temp->data);
    l_b = add_element_first(l_b, tempn->data);
}

void sc(t_list l_a, t_list l_b)
{
    sa(l_a);
    sb(l_b);
}
