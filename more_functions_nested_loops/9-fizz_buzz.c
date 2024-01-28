#include <stdio.h>

/**
 * main - runs FizzBuzz program
 *
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if ((d % 3 == 0) && (d % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (d % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (d % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf ("%d ", d);
		}
		if (d != 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
