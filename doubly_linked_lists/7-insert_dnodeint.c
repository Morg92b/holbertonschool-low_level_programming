#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: it is pointer to the head of the list
 * @idx: it is index of the list
 * @n: it's integer of the list
 * Return: the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node = *h;
	unsigned int index = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (index = 0; index < idx - 1; index++)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current_node = current_node->next;
	}

	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	new_node->prev = current_node;
	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
