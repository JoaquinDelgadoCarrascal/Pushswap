/*
** EPITECH PROJECT, 2020
** is_one_bigger_to_second
** File description:
** tells which one is bigger
*/

#include "psw.h"

bool is_one_bigger_to_second(int *array, int size)
{
    if (array != NULL && size >= 2 && array[0] > array[1])
        return (true);
    return (false);
}