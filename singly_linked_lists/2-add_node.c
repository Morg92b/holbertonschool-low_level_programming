#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: it is a double pointer to the head of a list
 * @str: it is string to be duplicated and add to the new node
 * Return: new_node it is new element and if its failed return NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int len = 0;

	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
