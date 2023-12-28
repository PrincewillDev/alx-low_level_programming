#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 * @size: Size of the hash table or slot
 * Return: Pointer to the hash table or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;

	free(hash_table);
	return (hash_table);
}
