#include "main.h"
/**
* factorial - calculates the factorial of a given int
* @n: the integer for factorial calculation
*
* Return: factorial of n
*/
int factorial(int n)
{
	if (n == 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
