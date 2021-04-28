/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** inicialize and call functions
*/

#include "psw.h"

int my_sort_int_array(int argc, char **argv, lists_t *l)
{
    l->l_a = malloc(sizeof(int) * argc);
    l->l_b = malloc(sizeof(int) * argc);
    l->num_l_a = (argc - 1);
    l->num_l_b = 0;
    l->max_size = argc - 1;

    if (l->l_a == NULL || l->l_b == NULL)
        return (84);
    l->l_a = init_l_a_list(argc, argv, l->l_a);
    sorting_alg(l);
    my_putchar('\n');
}