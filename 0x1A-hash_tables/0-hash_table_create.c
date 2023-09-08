#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: array size
 * Return: pointer to newly created hash table, else NULL if error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int c;
	hash_table_t *ht;

	/*Allocate memory for the hash table structure*/
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	/*Initialize the size and the array of the hash table*/
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	/*Initialize each pointer in the array to NULL*/
	for (c = 0; c < size; c++)
		ht->array[c] = NULL;

	/* Return the pointer to the newly created hash table */
	return (ht);
}
