
#include "psw.h"

void my_print_int_array(int *array, int len)
{
    int i = 0;

    while (array != NULL && i != len) {
        my_put_nbr(array[i]);
        my_putchar(' ');
        i++;
    }
}