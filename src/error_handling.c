/*
** EPITECH PROJECT, 2020
** error_handling
** File description:
** error handling
*/

#include "psw.h"

int error_handling(int argc, char **argv)
{
    if (argc < 2) {
        my_putstr("Error: arguments are missing\n");
        return (84);
    }
    return (0);
}