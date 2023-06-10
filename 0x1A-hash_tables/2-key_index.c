#include "hash_tables.h"

/**
 * key_index - Find position of the key
 * @key: The data to  be searched
 * @size: size of the hash table array
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
