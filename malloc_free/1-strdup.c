#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicates a string
  * @str: string to be duplicated
  *
  * Return: duplicated string
  */
char *_strdup(char *str)
{
	int a = 0, b = 1;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[b])
	{
		b++;
	}

	c = malloc((sizeof(char) * b) + 1);

	if (c == NULL)
		return (NULL);

	while (a < b)
	{
		c[a] = str[a];
		a++;
	}

	c[a] = '\0';
	return (c);
}
