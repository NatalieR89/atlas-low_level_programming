#include "main.h"

/**
 * _pow_recursion - calculate the power of a number
 * @x: the base number
 * @y: the exponent
 *
 * Return: the result of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	else if (y == 1)
	{
		return (x);
	}
	
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
