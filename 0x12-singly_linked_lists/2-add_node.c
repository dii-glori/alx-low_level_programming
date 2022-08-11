#include "lists.h"

/**
 * add_node - adds a node to a singly linked list
 * @head: pointer to head of the list
 * @str: data to store
 * Return: pointer to new elemnt
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
		*head = new;
	}
	return (new);
}
