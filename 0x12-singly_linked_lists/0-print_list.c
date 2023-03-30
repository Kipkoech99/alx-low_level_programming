#include <stdio.h>
#include "lists.h"

/**
 * print_list - Write a function that prints all the elements
 * @h: first element in the arrray
 *
 * Return: Always 0
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nill)\n");

		count++;
		h = h->next;
	}
	return (count);
}
