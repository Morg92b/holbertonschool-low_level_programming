#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: it is a pointer to the head of the list
 * @str: it is the string to be add
 * Return: new_node of a new element or NULL for fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	int lenght = 0;

	new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[lenght])
		lenght++;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = lenght;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
