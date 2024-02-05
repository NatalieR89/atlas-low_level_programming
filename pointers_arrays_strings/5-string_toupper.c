#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase to uppercase
 * @*: string to be modified
 *
 * Return: chacter value
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		*p = toupper((unsigned char)*p);
		p++;
	}

	return (str);
}
