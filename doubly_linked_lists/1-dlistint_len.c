#include "lists.h"

/**
 * dlistint_len - Counts the number of elements
 * @h: The head
 * Return: The number of elements in the dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
