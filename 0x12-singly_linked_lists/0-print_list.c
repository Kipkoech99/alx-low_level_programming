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
	const list_t My_struct = h;

	while (My_struct)
	{
		if (My_struct->str)
			printf("[%d] %s\n", My_struct->len, My_struct->str);
		else
			printf("[0] (nill)\n");

		count++;
		My_struct = My_struct->next;
	}
	return count;
}
