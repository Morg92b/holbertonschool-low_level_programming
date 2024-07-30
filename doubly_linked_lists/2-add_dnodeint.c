#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of list
 * @n: it is a data
 * Return: address of new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes;

	new_nodes = malloc(sizeof(new_nodes));

	if (new_nodes == NULL)
	{
		return (NULL);
	}
	new_nodes->n = n;
	new_nodes->next = *head;
	new_nodes->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_nodes;

	*head = new_nodes;

	return (new_nodes);
}

