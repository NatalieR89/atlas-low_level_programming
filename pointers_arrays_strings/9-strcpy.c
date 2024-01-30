#include "main.h"

/**
 * _strcpy - Copy string
 * @dest: where to be copied
 * @src: the value of scr
 *
 * Return: the dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src [a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';

	return dest;
}
