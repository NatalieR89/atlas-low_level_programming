#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory
  * @nmemb: number of elements
  * @size: size
  *
  * Return: Null
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	c = malloc(b);

	if (c == NULL)
		return (NULL);

	while (a < b)
	{
		c[a] = 0;
		a++;
	}

	return (c);
}
