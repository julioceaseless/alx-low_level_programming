#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Iterate through each element in the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* Free the linked list at the current index */
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	/* Free the array of pointers */
	free(ht->array);

	/* Free the hash table structure itself */
	free(ht);
}

