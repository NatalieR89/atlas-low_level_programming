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

	while (*p != '\0')
		if ((*p == 'a') || (*p == 'A'))
		{
			*p = '4';
		}

		else if ((*p == 'e') || (*p == 'E'))
		{
			*p = '3';
		}

		else if ((*p == 'o') || (*p == 'O'))
		{
			*p = '0';
		}

		else if ((*p == 't') || (*p == 'T'))
		{
			*p = '7';
		}

		else if ((*p == 'l') || (*p == 'L'))
		{
			*p = '1';
		}
	return (str);
}
