#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates substring
 * @haystack: string to be searched
 * @needle: string to be found
 *
 * Return: character value
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return haystack;
		}

		haystack++;
	}

	return (NULL);
}
