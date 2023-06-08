#include "hash_tables_h"

/**
 * *hash_table_create - function to create a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	if (size <= 0)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = malloc(sizeof(hash_node_t) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		hash_table->array[j] = NULL;
	}
	hash_table->size = size;

	return (hash_table);
}
