#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: A pointer to the function to be used to compare the values
 *
 * Return: If no element matches or size <= 0 - -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (size <= 0)
	{
		return (-1);
	}
		if (size && cmp != NULL && array != NULL)
		{
			for (a = 0; a < size; a++)
			{
				b = cmp(array[a]);
				if (b != 0)
					return (a);
			}
		}
	return (-1);

}
