#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: First value of the array
 * @max: Last value of the array
 *
 * Return: Pointer to the newly created array, or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
    int *array;
    int i;

    if (min > max)
        return (NULL);

    array = malloc(sizeof(int) * (max - min + 1));
    if (array == NULL)
        return (NULL);

    for (i = 0; min <= max; i++, min++)
        array[i] = min;

    return (array);
}
