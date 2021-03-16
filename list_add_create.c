/*
** EPITECH PROJECT, 2020
** list_add_create
** File description:
** create list and add element
*/

#include "include/my.h"

t_list create_list(void)
{
    return (NULL);
}

int listlen(t_list list)
{
    if (list == NULL)
        return (0);
    else
        return (list->size);
}

t_list add_element_end(t_list list, int nbr)
{
    t_list_element *element = malloc(sizeof(*element));

    element->data = nbr;
    element->next = NULL;
    element->prev = NULL;
    if (list == NULL) {
        list = malloc(sizeof(*list));
        list->size = 1;
        list->begin = element;
        list->end = element;
    } else {
        list->size++;
        list->end->next = element;
        element->prev = list->end;
        list->end = element;
    }
    return (list);
}

t_list add_element_first(t_list list, int nbr)
{
    t_list_element *element = malloc(sizeof(*element));

    element->data = nbr;
    element->next = NULL;
    element->prev = NULL;
    if (list == NULL) {
        list = malloc(sizeof(*list));
        list->size = 1;
        list->begin = element;
        list->end = element;
    } else {
        list->size++;
        list->begin->prev = element;
        element->next = list->begin;
        list->begin = element;
    }
    return (list);
}
