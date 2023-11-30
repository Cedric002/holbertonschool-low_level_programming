#include "lists.h"

/**
 * free_list - Libere memoire d'une liste
 * @head: en-tete d'une liste
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
