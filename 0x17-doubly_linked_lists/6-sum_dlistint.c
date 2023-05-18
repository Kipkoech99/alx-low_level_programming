#include "lists.h"


/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: pointer
 *
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	size_t add = 0;

	while (current != NULL)
	{
		add += current->n;
		current = current->next;
	}
	return (add);
}
