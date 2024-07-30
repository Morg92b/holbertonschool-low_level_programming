#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: it is pointer to head of list
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);
}
