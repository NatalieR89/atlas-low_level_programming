#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array of
  * integers using the Binary search algorithm
  *
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in array
  * @value: The value to search for
  *
  * Return: The first index where value is located
  */
int binary_search(int *array, size_t size, int value)
{
	size_t a = 0, low = 0, mid = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (high + low) / 2;
		a = low;

		printf("Searching in array: ");

		for (; a <= high; ++a)
		{
			if (a != low)
				printf(", %d", array[a]);
			else
				printf("%d", array[a]);
		}

		printf("\n");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
