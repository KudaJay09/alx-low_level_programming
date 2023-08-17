#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to beginning of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
