#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: the array
 * @n: amount to be swapped
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int s = 0;
	int e = n - 1;

	while (s < e)
	{
		int tmp = a[s];
		a[s] = a[e];
		a[e] = tmp;

		s++;
		e--;
	}
}
