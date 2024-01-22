#include "main.h"

/**
 * _islower - Check for lowercase letter
 * @c: The letter to be checked
 *
 * Return: 1 for lowercase char or 0 for anything else
 */
int _islower(int c)
{
  if (c >= 97 && c <= 122)
    {
      return (1);
    }
  return (0);
}
