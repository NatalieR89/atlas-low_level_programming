#include "search_algo.h"

/**
  * linear_search - Searches for a value in an array of
  * integers using the Linear search algorithm
  *
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in array
  * @value: The value to search for
  *
  * Return: The first index where value is located
  */
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (array == NULL)
		return (-1);

	for (; a < size; ++a)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);

		if (array[a] == value)
			break;
	}

	if (a == size)
		return (-1);

	return (a);
}
