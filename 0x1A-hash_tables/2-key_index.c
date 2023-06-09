#include "hash_tables.h"

/**
 * key_index - Find position of the key
 * @key: The data to  be searched
 * @size: size of the hash table array
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
    return (hash % size);
}
