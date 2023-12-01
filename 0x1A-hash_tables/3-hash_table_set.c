#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
		return (0);
	/* Get the index where the key/value pair should be stored */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists in the linked list at the index */
	temp = ht->array[index];
	while (temp != NULL)
	{
		/* If key already exists, update the value and return success */
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value); /* free existing value */
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0); /* strdup failed */
			return (1);
		}
		temp = temp->next;
	}
	/* Key doesn't exist, create a new node and insert at the beginning */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0); /* strdup failed */
	}
	/* Add the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

