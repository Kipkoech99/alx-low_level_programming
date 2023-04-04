#include <lists.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the first node
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		current = current->next;
		free(current);
	}
	*head = NULL;
}
