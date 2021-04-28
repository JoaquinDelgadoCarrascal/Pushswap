/*
** EPITECH PROJECT, 2020
** l_a_is_sorted
** File description:
** tells if l_a is sorted or not
*/

#include "psw.h"

bool l_a_is_sorted(lists_t *l)
{
    int i = 0;

    if (l->num_l_a != l->max_size)
        return (false);
    while (i < l->num_l_a - 1) {
        if (l->l_a[i] > l->l_a[i + 1])
            return (false);
        i++;
    }
    return (true);
}