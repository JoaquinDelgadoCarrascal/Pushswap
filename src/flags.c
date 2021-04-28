/*
** EPITECH PROJECT, 2020
** flags
** File description:
** sa sb pa pb flags
*/

#include "psw.h"

int sa_flag(lists_t *l)
{
    int tmp = 0;

    if (l->num_l_a < 2)
        return (1);
    tmp = l->l_a[0];
    l->l_a[0] = l->l_a[1];
    l->l_a[1] = tmp;

    if (l->spaces == 0)
        my_putstr("sa");
    else
        my_putstr(" sa");
    return (0);
}

int sb_flag(lists_t *l)
{
    int tmp = 0;

    if (l->num_l_b < 2)
        return (1);
    tmp = l->l_b[0];
    l->l_b[0] = l->l_b[1];
    l->l_b[1] = tmp;

    my_putstr(" sb");
    return (0);
}

void pa_flag(lists_t *l)
{

    int i = l->num_l_a;

    while (i > 0) {
        l->l_a[i] = l->l_a[i - 1];
        i--;
    }
    l->l_a[0] = l->l_b[0];
    l->num_l_a++;
    l->num_l_b--;
    i = 0;
    while (i < l->num_l_b && i < l->max_size) {
        l->l_b[i] = l->l_b[i + 1];
        i++;
    }
    my_putstr(" pa");
}

void pb_flag(lists_t *l)
{
    int i = l->num_l_b;

    while (i > 0) {
        l->l_b[i] = l->l_b[i - 1];
        i--;
    }
    l->l_b[0] = l->l_a[0];
    l->num_l_b++;
    l->num_l_a--;
    i = 0;
    while (i < l->num_l_a && i < l->max_size) {
        l->l_a[i] = l->l_a[i + 1];
        i++;
    }
    if (l->spaces == 0)
        my_putstr("pb");
    else
        my_putstr(" pb");
}