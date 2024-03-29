#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints parts of an array
 * @a: The array
 * @n: how many elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int b;
	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
