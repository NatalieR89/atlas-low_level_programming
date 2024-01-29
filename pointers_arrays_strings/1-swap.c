#include "main.h"

/**
 * swap_int - Swap values of 2 num
 *
 * @a: int to swap
 * @b: other int to swap
 *
 * Return: voidi
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
