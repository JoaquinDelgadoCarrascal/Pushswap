/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main function
*/


#include "psw.h"

int main(int argc, char **argv)
{
    lists_t *l = malloc(sizeof(lists_t));

    if (l == NULL)
        return (84);
    if (error_handling(argc, argv) == 84)
        return (84);
    my_sort_int_array(argc, argv, l);
    free(l->l_a);
    free(l->l_b);
    free(l);

    return (0);
}