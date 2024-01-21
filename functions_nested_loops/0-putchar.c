#include "main.h"

/**
 * prints '_putchar' using _putchar
 *
 * Return: Always
*/

int _putchar(char c);

int main()
{
  _putchar('_');
  _putchar('p');
  _putchar('u');
  _purchar('t');
  _putchar('c');
  _putchar('h');
  _putchar('a');
  _putchar('r');
  _putchar('\n');

  return (0)
}

int _putchar(char c)
{
  return write(1, &c, 1);
}
