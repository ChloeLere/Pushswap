/*
** EPITECH PROJECT, 2020
** list_rm
** File description:
** rm list
*/

#include "include/my.h"

t_list rm_element_first(t_list list)
{
    if (list->size == 1 && list != NULL)
        return (NULL);
    list->begin = list->begin->next;
    list->begin->prev = NULL;
    list->size--;
    return (list);
}

t_list rm_element_end(t_list list)
{
    if (list->size == 1 && list != NULL)
        return (NULL);
    list->end = list->end->prev;
    list->end->next = NULL;
    list->size--;
    return (list);
}

void rm_all(t_list list)
{
    while (list->size >= 0)
        rm_element_end(list);
}