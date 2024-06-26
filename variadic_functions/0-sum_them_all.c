#include "variadic_functions.h"

/**
  * sum_them_all - return the sum
  * @n: number of args
  *
  * Return: the sum of parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (a < n)
		{
			sum += va_arg(args, int);
			a++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
