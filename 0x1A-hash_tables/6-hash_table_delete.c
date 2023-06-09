#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	
	for (i = 0; i < ht->size; i++) 
	{
		hash_node_t *current_node = ht->array[i];
		while (current_node != NULL)
		{
			hash_node_t *next_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = next_node;
		}
	}
	
	free(ht->array);
	free(ht);
}
