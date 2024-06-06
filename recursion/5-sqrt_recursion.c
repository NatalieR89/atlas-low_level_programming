#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


int _sqrt(int n, int d)
{
	int sqrt = d * d;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (d);

	return (_sqrt(n, d + 1));
}
