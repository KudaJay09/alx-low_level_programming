#include <string.h>
#include "lists.h"

/**
* *add_node - adds new node at the beginning of list_t
* @str: string to be added
* @head: pointer to head of list_t list
* Return: address of new element, NULL if fail
*/
list_t *add_node(list_t **head, const char *str);
{
	char *str_copy;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = str_copy;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
