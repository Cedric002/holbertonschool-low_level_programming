#include "lists.h"

/**
 * free_dlistint - liberer memoire d'une double liste
 * @head: l'en-tete de la liste
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
