#include "main.h"

/**
 *
 *
 *
 *
 */
int _atoi(char *s)
{
	unsigned int cnt = 0;
	unsigned int sz = 0;
	unsigned int a = 0;
	unsigned int b = 1;
	unsigned int c = 1;
	unsigned int d;

	while (*(s + cnt) != '\0')
	{
		if (sz > 0 && (*(s + cnt) < '0' || *(s + cnt) > '9'))
			break;
		if (*(s + cnt) == '-')
			b *= -1;
		if ((*(s + cnt) >= '0') && (*(s + cnt) <= '9'))
			{
				if (sz > 0)
				c *= 10;
				sz++;
			}
			cnt++;
	}
	for (d = cnt - sz; d < cnt; d++)
	{
		a = a + ((*(s + d - 48) *c));
		c /= 10;
	}
	return (a * b);
}
