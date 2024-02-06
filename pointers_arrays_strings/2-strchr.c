#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates char in a string
 * @s: source string
 * @c: character to find
 *
 * Return: string from found characters
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
