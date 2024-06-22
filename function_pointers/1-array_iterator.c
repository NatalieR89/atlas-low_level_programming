#include "function_pointers.h"

/**
  * array_iterator - executes func given at a parameter
  * @array: array of integers
  * @size: size of the array
  * @action: pointer to function
  *
  * Return: nothing
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
