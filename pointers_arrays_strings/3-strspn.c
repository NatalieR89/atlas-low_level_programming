#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strspn - seach string for a set of bytes
 * @s: source string
 * @accept: accepted string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}
