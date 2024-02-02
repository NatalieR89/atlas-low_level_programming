#include "main.h"

/**
 * _strcat - concatenates 2 strings
 *
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*a != '\0')
	{
		a++;
	}
	while (*src != '\0')
	{
		*a = *src;
		a++;
		src++;
	}
	*a = '\0';

	return dest;
}
