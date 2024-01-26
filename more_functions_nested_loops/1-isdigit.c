#include "main.h"

/**
 * _isdigit - checks if char is dig
 * @c: The char to be checked
 *
 * Return: 1 for char that is dig or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
