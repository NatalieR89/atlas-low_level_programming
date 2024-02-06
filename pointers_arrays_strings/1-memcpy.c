#include "main.h"
#include <stddef.h>
/**
 * _memcpy - memory area to be copied
 * @dest: destination memory
 * @src: source memory
 * @n: bytes to copy
 *
 * Return: dest
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
