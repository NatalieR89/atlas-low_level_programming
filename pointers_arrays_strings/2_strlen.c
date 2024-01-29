#include "main.h"

/**
 * _strlen - returns length for string
 * @s: Which string to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int n = 0;
	for (; *s != '\0'; s++)
	{
		n++;
	}
	
	return (n);
}
