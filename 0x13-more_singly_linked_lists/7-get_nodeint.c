#include "lists.h"

/**
 * *get_nodeint_at_index - locates a given node
 * @head: pointer to the head of listint_t list
 * @index: index of the node, starting at 0
 * Return: If node does not exist = NULL, else the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
