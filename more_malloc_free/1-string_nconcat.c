#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in s2
 *
 * Return: pointer to allocated space in memeory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int i, j, len_s1 = 0, len_s2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len_s1])
        len_s1++;
    while (s2[len_s2])
        len_s2++;

    if (n >= len_s2)
        n = len_s2;

    new_str = malloc(sizeof(char) * (len_s1 + n + 1));
    if (new_str == NULL)
        return (NULL);

    for (i = 0; i < len_s1; i++)
        new_str[i] = s1[i];
    for (j = 0; j < n; j++, i++)
        new_str[i] = s2[j];

    new_str[i] = '\0';

    return (new_str);
}
