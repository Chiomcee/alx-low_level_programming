#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hast table to add the element to
 * @key: unique name for the element we want to add
 * @value: value to be stored at the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	char *str;
	hash_node_t *node, new_node;

	if (ht == NULL || key == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	if (value == NULL)
		str = strdup(value);
	else
		str = NULL;
	node = ht->array[i];

	if (!node)
		node = newnode(NULL);

	if (node->key)
	{
		ht->array[i] = amend_node(node, key, str);
		return (1);
	}
	node->key = strdup(key);
	node->value = str;
	node->next = NULL;

	ht->array[i] = node;
	return (1);
}

/**
 * amend_node - amends or adds a node if one already exists
 * @node: pointer to a node that exist
 * @key: key
 * @value: value to amend/create node with
 *
 * Return:pointer to the head of a list
 */
hash_node_t *amend_node(hash_node_t *node, const char *key, char  *value)
{
	hash_node_t *temp = node;

	while (temp)
	{
		if (!strcmp(key, temp->key))
		{
			free(temp->value);
			temp->value = value;
			return (node);
		}
		temp = temp->next;
	}

	temp = node;
	node = new_node(node);
	if (!node)
	{
		node = temp;
		return (node);
	}
	node->key = strdup(key);
	nade->value = value;
	return (node);

}

/**
 * new_node - create a new node
 * @current_node: current node to add at the end
 *
 * Return: a pointer to the new node
 */
hash_node_t *new_node(hash_node_t *current_node)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = NULL;
	node->value = NULL;
	node->next = current_node;

	return (node);
}
