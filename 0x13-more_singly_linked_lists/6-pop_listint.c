#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: pointer to the first node
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_int *current = *head;

	if (head == NULL || *head == NULL)
		return (0);

	int n = (*head)->n;

	temp = *head;
	current->next = (*head)->next;
	free(temp);

	return (n);
}
