#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints the numbers as parameters
  * @separator: string to be printed
  * @n: number of integers to the function
  *
  * Return: ...
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (a < n)
		{
			printf("%d", va_arg(args, int));

			if (a != n - 1  && separator != NULL)
				printf("%s", separator);

			a++;
		}
		va_end(args);
	}
	printf("\n");
}
