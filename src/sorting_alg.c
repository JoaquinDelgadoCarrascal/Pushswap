/*
** EPITECH PROJECT, 2020
** sorting_alg
** File description:
** sorting algorithm
*/

#include "psw.h"

int sorting_alg(lists_t *l)
{
    while (l_a_is_sorted(l) == false) {
        while (l->num_l_a != 1) {
            if (is_one_bigger_to_second(l->l_a, l->num_l_a) == true) {
                sa_flag(l) == 0;
                l->spaces++;
            }
            pb_flag(l);
            l->spaces++;
        }
        pb_flag(l);
        while (l->num_l_b != 1) {
            if (is_one_bigger_to_second(l->l_b, l->num_l_b) == false)
                sb_flag(l) == 0;
            pa_flag(l);
        }
        pa_flag(l);
    }
    return (0);
}