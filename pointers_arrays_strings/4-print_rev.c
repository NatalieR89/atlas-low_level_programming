#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: String to print
 *
 * Return: NULL
 */
void print_rev(char *s)
{
	int r;

	r =0;
	while (*(s + r) != 0)
	{
		r++;
	}
	r -= 1;
	while (r >= 0)
	{
		_putchar(*(s + r));
		r--;
	}
	_putchar('\n');
}
