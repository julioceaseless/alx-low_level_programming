#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1;  /* Variable to handle comma placement */

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	printf("{");

	/* Iterate through each element in the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* Iterate through the linked list at the current index */
		while (node != NULL)
		{
			/* Print comma and space if not the first element */
			if (first == 0)
				printf(", ");

			/* Print key and value */
			printf("'%s': '%s'", node->key, node->value);

			first = 0;

			node = node->next;
		}
	}

	printf("}\n");
}

