#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 * if malloc fails, returns NULL
 */
int *array_range(int min, int max)
{
        int *arr, i = 0, t = min;

        if (min > max)
                return (0);
        arr = malloc((max - min + 1) * sizeof(int));

        if (!arr)
                return (0);
        while (i <= max - min)
                arr[i++] = t++;
        return (arr);
}

