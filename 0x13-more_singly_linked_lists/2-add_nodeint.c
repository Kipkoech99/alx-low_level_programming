#include "lists.h"

/**
 * add_nodeint - adds a new node at the end of a listint_t list.
 * @head: pointer to the first node
 * @n: integer
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
