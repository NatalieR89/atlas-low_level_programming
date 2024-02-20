#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of multiplication
 * @argc: argument counte
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;
	int result = n1 * n2;

	if (argc <= 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
