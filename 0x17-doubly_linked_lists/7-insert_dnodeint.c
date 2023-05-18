#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer
 * @idx: index
 * @n: data
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	size_t count = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (h == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current;
	new->prev = current->prev;
	current->prev->next = new;
	current->prev = new;

	return (new);
}
