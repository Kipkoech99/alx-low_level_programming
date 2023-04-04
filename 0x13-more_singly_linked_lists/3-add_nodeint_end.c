#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first node
 * @n: integer in the node
 * Return: Always 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->next = NULL;

	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
	}

	listint_t *current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = add_node;
	return (add_node);
}
