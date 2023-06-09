#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
	}
	return (NULL);
}
