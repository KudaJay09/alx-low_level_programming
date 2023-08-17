#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to link first node
 * @index: nth node
 *
 * Return: if node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*traverse the list till index target reached*/
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
