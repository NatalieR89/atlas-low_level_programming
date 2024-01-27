#include "main.h"

/**
 * more_numbers - print 10x the number
 *
 * Return: 10x the number
 */
void more_numbers(void)
{
	int p, d;

	for (p = 0; p < 10; p++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar('0' + d /10);
			}
			_putchar('0' + d % 10);
		}
		_putchar('\n');
	}
}
