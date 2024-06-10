#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: zero
  */
int main(int argc, char *argv[])
{
	int d;
	unsigned int a, sum = 0;
	char *b;

	if (argc > 1)
	{
		for (d = 1; d < argc; d++)
		{
			b = argv[i];

			for (a = 0; a < strlen(b); a++)
			{
				if (b[a] < 48 || b[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(b);
			b++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
