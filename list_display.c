/*
** EPITECH PROJECT, 2020
** list_display
** File description:
** display list
*/

#include "include/my.h"

void display_list(t_list list, char *name, int n)
{
    t_list_element *for_display;

    if (list == NULL)
        return;
    if (n == 1)
        my_printf("%s: ", name);
    if (n == 2)
        my_printf("\n%s: ", name);
    for_display = list->begin;
    while (for_display->next != NULL) {
        my_printf("%d -> ", for_display->data);
        for_display = for_display->next;
    }
    my_printf("%d", for_display->data);
}