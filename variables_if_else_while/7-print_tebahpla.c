#include <stdio.h>

/**
 * main - prints alphabet "z-a
 *
 * Return: Always (Success)
*/

int main(void)
{
  char l;

  for (l = 'z'; l >= 'a'; l--)
    {
      putchar(l);
    }

  putchar('\n');

  return (0);
}
