#include "lists.h"

/**
 * sum_dlistint - sums of the data of list
 * @head: pointer
 * Return: Success..Sum, Empty..0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
