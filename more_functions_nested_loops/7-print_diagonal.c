#include "main.h"

/**
 * print_diagonal - prints a diagonal with a char
 * @c: the amount to print diagonal lines
 *
 * Return: null
 */
void print_diagonal(int c)
{
	int n, w;

	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < c; n++)
		{
			for (w = 0; w < n; w++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
