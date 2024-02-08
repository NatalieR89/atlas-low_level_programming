#include "main.h"

/**
 * _puts_recursion - print a string followed with a new line
 * @s: string to be printed
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
