#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of list
 * @n: it is a data
 * Return: address of new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes;
	dlistint_t *last;

	new_nodes = malloc(sizeof(dlistint_t));

	if (new_nodes == NULL)
	{
		return (NULL);
	}

	new_nodes->n = n;
	new_nodes->next = NULL;

	if (*head == NULL)
	{
		new_nodes->prev = NULL;
		*head = new_nodes;
		return (new_nodes);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_nodes;
	new_nodes->prev = last;

	return (new_nodes);
}
