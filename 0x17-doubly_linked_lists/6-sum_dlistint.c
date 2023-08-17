#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: pointer at beginning of node
 *
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
