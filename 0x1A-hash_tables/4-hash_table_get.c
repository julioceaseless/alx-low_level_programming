#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in the
 * hash table.
 * @ht: The hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	/* Check if the hash table or key is NULL */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* Get the index where the key/value pair should be stored */
	index = key_index((const unsigned char *)key, ht->size);

	/* Search for the key in the linked list at the calculated index */
	temp = ht->array[index];
	while (temp != NULL)
	{
		/* If key is found, return the associated value */
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL); /* Key not found */
}

