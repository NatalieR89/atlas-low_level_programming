#include "main.h"
#include <ctype.h>

/**
 * leet - encodes string to 1337
 * @str: string to be encoded
 *
 * Return: Encoded String
 */
char *leet(char *str)
{
	char *p = str;
	char r[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char l[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

		while (*p != '\0')
		{
			for (int n = 0; n < sizeof(r) / sizeof(r[0]); n++)
			{
				if (*p == r[n])
				{
					*p = l[n];
					break;
				}
			}
			*p++;
		}
	return (str);
}
