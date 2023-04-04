#include "lists"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: position
 * Return: NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_int *current = head;
	unsigned int i;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current ? temp: NULL);
}
