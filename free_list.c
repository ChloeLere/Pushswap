/*
** EPITECH PROJECT, 2020
** free_list
** File description:
** free
*/

#include "include/my.h"

void free_list(t_list list, int size)
{
    t_list_element *temp = list->begin;

    for (; size > 0; size--, temp = temp->next)
        free(temp->next);
}