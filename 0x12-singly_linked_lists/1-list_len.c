#include "lists.h"

/**
 * list_len - length of a singly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
