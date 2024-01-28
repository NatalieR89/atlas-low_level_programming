#include "main.h"

/**
 * print_diagonal - prints a diagonal with a char
 * @c: the amount to print diagonal lines
 *
 * Return: null
 */
void print_diagonal(int c)
{
	if (c <= 0)
	{
		_putchar('\n');
		return;
	}
	
	for (int n = 0; n < w; n++)
	{
		for (int w = 0; w < n; w++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
