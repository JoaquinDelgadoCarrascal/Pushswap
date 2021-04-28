#include "psw.h"

int list_len(int argc, char **argv)
{
    int n = 0;
    int i = 1;
    int *array = malloc(sizeof(int) * argc);

    if (array == NULL)
        return (84);
    while (i < argc) {
        array[n] = my_getnbr(argv[i]);
        //my_put_nbr(array[n]);
        i++;
        n++;
    }
    return (0);
}