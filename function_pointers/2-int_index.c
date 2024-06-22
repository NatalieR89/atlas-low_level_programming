#include "function_pointers.h"

/**
  * int_index - looks for integer
  * @array: the array
  * @size: size of the array
  * @cmp: a pointer to the function
  *
  * Return: index of the first element for which the cmp
  * function does not return 0 If no elements matches,
  * return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);

				a++;
			}
		}
	}

	return (-1);
}
