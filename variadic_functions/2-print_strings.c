#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - prints string
  * @separator: space between strings
  * @n: how many arguments
  *
  * Return: ...
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (a < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (a != n - 1 && separator != NULL)
				printf("%s", separator);

			a++;
		}

		va_end(args);
	}

	printf("\n");
}
