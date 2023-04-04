#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: pointer to the first node
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
