#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 * @size: Size of the hash table or slot
 * Return: Pointer to the hash table or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *hash_table;
	unsigned int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = calloc(hash_table->size, sizeof(hash_node_t));
	if (hash_table->array == NULL)
	{
		free(hash_table->array);
		return (NULL);
	}

	for (i = 0; i < hash_table->size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
