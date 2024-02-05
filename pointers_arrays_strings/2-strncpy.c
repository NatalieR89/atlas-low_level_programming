#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Destination value
 * @src: Source value
 * @n: how many copies to make
 *
 * Return: character values
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;
	char *s = src;

	while (n > 0 && *s != '\0')
	{
		*d++ = *s++;
		n--;
	}

	while (n > 0)
	{
		*d++ = '\0';
		n--;
	}
	
	return dest;
}
