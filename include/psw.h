/*
** EPITECH PROJECT, 2020
** psw.h
** File description:
** prototypes of my push swap
*/

#ifndef BSPW_H_
#define BSPW_H_

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_getnbr(char const *str);
void my_print_int_array(int *array, int len);

typedef struct lists_s {
    int *l_a;
    int *l_b;
    int num_l_a;
    int num_l_b;
    int max_size;
    int spaces;
} lists_t;

int sorting_alg(lists_t *l);
int my_sort_int_array(int argc, char **argv, lists_t *l);
int sa_flag(lists_t *l);
int sb_flag(lists_t *l);
void pa_flag(lists_t *l);
void pb_flag(lists_t *l);
bool l_a_is_sorted(lists_t *l);
int my_sort_int_array(int argc, char **argv, lists_t *l);
int *init_l_a_list(int argc, char **argv, int *l_a);
bool is_one_bigger_to_second(int *array, int size);
int error_handling(int argc, char **argv);

#endif