#include "main.h"
#include <stdio.h>

int check_prime(int n, int d);

/**
  * is_prime_number - Returns if a number is prime
  * @n: the number to be checked
  *
  * Return: value
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}


int check_prime(int n, int d)
{
	if (n <= 1)
		return (0);

	if (n % d == 0 && d > 1)
		return (0);

	if ((n / d) < d)
		return (1);

	return (check_prime(n, d + 1));
}
