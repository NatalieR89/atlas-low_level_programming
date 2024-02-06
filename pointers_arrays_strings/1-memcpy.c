#include "main.h"
#include <stddef.h>
/**
 *
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = dest;
	char *c = src;

	while (n--)
	{
		*s++ = *c++;
	}

	return (s);
}
