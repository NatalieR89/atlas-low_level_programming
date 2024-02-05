#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: First String
 * @s2: Second String
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return *(unsigned char *)s1 - *(unsigned char *)s2;
}
