#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;

	// Loop through all the elements of the hash table ht
	for (i = 0; i < ht->size; i++)
	{
		// Check if the element at index i of the hash table array is not null
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
