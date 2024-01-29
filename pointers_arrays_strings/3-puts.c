#include "main.h"

/**
 * _puts - prints str to stdout
 * @str: str to print
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	
	_putchar('\n');
}
