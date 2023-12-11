#include "lists.h"

/**
 * listint_len -  a function that returns number of elements in linked list.
 *
 * @h: pointer to the head
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
