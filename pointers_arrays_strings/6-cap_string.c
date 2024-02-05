#include "main.h"
#include <ctype.h>

/**
 * cap_string - ???
 * @str: ???
 *
 * Return: character value
 */
char *cap_string(char *str)
{
	char *p = str;
	int n = 1;

	while (*p != '\0')
	{
		if (isspace((unsigned char)*p) || *p == ',' || *p == ';' || *p == '.' || *p == '!' || *p == '?' || *p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}')
		{
			n = 1;
		}
		else if (n)
		{
			*p = toupper((unsigned char)*p);
			n = 0;
		}
		p++;
	}
	return (str);
}
