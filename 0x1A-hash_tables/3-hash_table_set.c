#include "hash_tables.h"

/**
 * hash_table_set - adds elemrnt to the hash table
 * @ht: hash table
 * @key: a string
 * @value: value for key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current = NULL;
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
