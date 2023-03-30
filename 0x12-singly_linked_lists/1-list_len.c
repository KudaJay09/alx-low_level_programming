#include <stdio.h>
#include "lists.h"

/**
* list_len - return number of elements in linked list_t
* @h: list_t list
* Return: number of elements
*/
size_t list_len(const list_t *h);
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
