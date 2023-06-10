#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table
 * @size: size of the array
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
		hash_table_t *table;
		unsigned long int i = 0;

		if (size <= 0)
				return (NULL);

		table = malloc(sizeof(hash_table_t));
		if (!table)
				return (NULL);
		table->size = size;
		table->array = malloc(sizeof(hash_node_t *) * size);

		if (table->array == NULL)
		{
				free(table);
				return (NULL);
		}

		while (i < size)
				table->array[i++] = NULL;
		return (table);
}
