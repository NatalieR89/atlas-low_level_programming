#include "main.h"

/**
 * _strncat - concatenats a null-padded char seq into a str
 * @dest: destination val
 * @src: source val
 * @n: concatenation limit
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *a = dest;
	while (*a != '\0')
	{
		a++;
	}
	
	while (*src != '\0' && n > 0)
	{
		*a = *src;
		a++;
		src++;
		n--;
	}

	*a = '\0';
	return dest;
}
