#include "function_pointers.h"

/**
  * array_iterator - Iterates through array elements
  * @array: The array to iterate through
  * @size: The size of the array
  * @action: Function to be executed
  *
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
