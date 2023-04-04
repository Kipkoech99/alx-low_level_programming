#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first node
 * @n: integer
 * Return: Always 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nNode;

	nNode = malloc(sizeof(listint_t));
	if (nNode == NULL)
		return (NULL);

	nNode->n = n;
	nNode->next = *head;
	*head = nNode;

	return (nNode);
}
