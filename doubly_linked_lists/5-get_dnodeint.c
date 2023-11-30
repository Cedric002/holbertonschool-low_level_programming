#include "lists.h"

/**
 * get_dnodeint_at_index - Renvoyer le n^eme node d'une double liste
 * @head: l'en-tete de la liste
 * @index: index du node partant de 0
 *
 * Return: new node dans une liste
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		if (i == index)
		{
			return (tmp);
		}

		i++;

		tmp = tmp->next;
	}

	return (NULL);
}
