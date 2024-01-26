#include "main.h"

/**
 * _isupper - Checks for uppercase letter
 * @c: The char to be checked
 *
 * Return: 1 is c is uppercase O if other
 */

int _isupper (int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	return (0);
}
