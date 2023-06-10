#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/* shash_table_create - function thatcreate a sorted hash table.
 * @size: The size of the array
 *
 * Return: pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

shash_table_t *shash_table_create(unsigned long int size) 
{
	shash_table_t *ht;
	unsigned long int i;

/* Allocate memory for the hash table */
	ht = (shash_table_t*)malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{
		return NULL;
	}

/* Initialize the hash table */
	ht->size = size;
	ht->array = (shash_node_t**)malloc(sizeof(shash_node_t*) * size);
	if (ht->array == NULL)
	{
		return NULL
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}
