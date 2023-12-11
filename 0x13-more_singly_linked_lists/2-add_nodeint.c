#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of list.
 *
 * @head: pointer to the head
 * @n: data to be stored in new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node	= (listint_t *)malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
