#include "main.h"

/**
 * print_line - prints a straight line
 * @c: number of lines to draw
 *
 *Return: Null
 */
void print_line(int c)
{
	int m;
	
	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < c; m++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
