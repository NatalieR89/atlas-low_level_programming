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
	if (argc != 3)
	{
		printf("Error\n");
		return (1)
	}

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int result = n1 * n2;

	printf("%d\n", result);

	return (0)
}
