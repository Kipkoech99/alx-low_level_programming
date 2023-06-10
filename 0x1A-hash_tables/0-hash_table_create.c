#include "hash_tables.h"

/**
 * *hash_table_create - function to create a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j;
	hash_table_t *hash_table = NULL;
	
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t) * size);

	if (hash_table->array == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		hash_table->array[j] = NULL;
	}

	return (hash_table);
}
