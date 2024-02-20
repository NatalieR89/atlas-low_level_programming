#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Memory Allocation
  * @b: How much to allocate
  *
  * Return: NULL
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(b);

	return (ptr);
}
