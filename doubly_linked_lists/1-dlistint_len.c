#include "lists.h"

/**
 * dlistint_len - Renvoyer nombre d'elements d'une double liste
 * @h: l'en-tete de la double liste
 *
 * Return: Nombre d'elements d'une double liste
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
