#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 *
 * @head: head of the linked list.
 * @str: string in the list.
 *
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nch;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nch = 0; str[nch]; nch++)
		;

	new->len = nch;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
