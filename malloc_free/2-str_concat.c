#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings
  * @s1: first string to concatenate
  * @s2: second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *e;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	d = a + b;
	e = malloc((sizeof(char) * d) + 1);

	if (e == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			e[c] = s1[c];

		if (c >= a)
		{
			e[c] = s2[b];
			b++;
		}

		c++;
	}

	e[c] = '\0';
	return (e);
}
