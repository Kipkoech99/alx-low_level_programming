#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: pointer to the first node
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	num = temp->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}
