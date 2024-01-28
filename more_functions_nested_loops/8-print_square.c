#include "main.h"

/**
 * print_square - print n squares time n times
 * @size: num squares/num times
 *
 * Return: Null
 */
void print_square(int size)
{
	int j, k;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
