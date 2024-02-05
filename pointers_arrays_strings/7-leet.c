#include "main.h"
#include <ctype.h>
#include <stddef.h>

/**
 * leet - encodes string to 1337
 * @str: string to be encoded
 *
 * Return: Encoded String
 */
char *leet(char *str)
{
	size_t a = 0, n = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char q[5] = {'4', '3', '0', '7', '1'};
	char *p = str;

	while (p[a])
	{
		n = 0;
		while (n < l)
		{
			if (p[a] == r[n] || p[a] - ' ' ==r[n])
			{
				p[a] = q[n];
			}
			n++;
		}
		a++;
	}
	return (str);
}

