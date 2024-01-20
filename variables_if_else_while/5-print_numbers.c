#include <stdio.h>

/**
 * main - prints num 0-9
 *
 * Return: Always
*/

int main(void)
{
  char n;

  for (n = '0'; n <= '9'; n++)
    {
      putchar(n);
    }
  putchar('\n');

  return (0);
}
