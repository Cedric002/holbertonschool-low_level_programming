#include "lists.h"

/**
 * insert_dnodeint_at_index - Insère new node à une position donnée
 * @h: l'en-tete de la liste
 * @idx: index du new node ajouté et commençant par 0
 * @n: donnees
 *
 * Return: new node dans index
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int i;

	if (h == NULL || idx > get_dlistint_size(*h))

		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)

		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;

		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		dlistint_t *tmp = *h;

		for (i = 0; i < idx - 1; i++)
			tmp = tmp->next;
		new_node->next = tmp->next;

		if (tmp->next != NULL)
			tmp->next->prev = new_node;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (new_node);
}
