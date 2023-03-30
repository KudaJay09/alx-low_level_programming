#include "lists.h"
#include <stdlib.h>

/**
* free_list - free list_t list
* @head: A pointer to list_t list
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
 	{
		tmp = head->next;
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
