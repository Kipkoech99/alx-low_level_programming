#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: pointer to the first node
 * Return - Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
