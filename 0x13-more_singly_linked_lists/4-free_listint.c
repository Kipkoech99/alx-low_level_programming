#include <lists.h>

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer to the first node
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
