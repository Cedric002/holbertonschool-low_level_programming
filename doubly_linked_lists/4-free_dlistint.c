#include "lists.h"

/**
 * free_dlistint - liberer memoire d'une double liste
 * @head: l'en-tete de la liste
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
