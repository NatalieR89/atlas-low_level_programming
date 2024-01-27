#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9
 *
 * Description: Prints numbers excl 2 and 4
 *
 * Return: Numbers 0-9
 */
void print_most_numbers(void)
{
	int g = 0;

	for (; g <= 9; g++)
	{
		if(g == 2 || g == 4)
		{
			continue;
		}
		else
		{
			_putchar(g + '0');
		}
	}

	_putchar('\n');
}
