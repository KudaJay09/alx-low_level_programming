#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: pointer to header file
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		nodes_count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes_count);
}
