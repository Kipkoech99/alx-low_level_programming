#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the first node
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;

	while (h)
	{
		listint_t *current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
