#include "lists.h"

/**
 * *add nodeint - adds a new node at the beginning of listint_t
 * @head: pointer to the addre of head of listint_t list
 * @n: Integer of the new code
 * Return: new element address, or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
