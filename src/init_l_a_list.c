/*
** EPITECH PROJECT, 2020
** init_l_a_list
** File description:
** inits l_a list
*/

#include "psw.h"

int *init_l_a_list(int argc, char **argv, int *l_a)
{
    int n = 0;
    int i = 1;

    if (l_a == NULL)
        return (NULL);
    while (i < argc) {
        l_a[n] = my_getnbr(argv[i]);
        i++;
        n++;
    }
    return (l_a);
}