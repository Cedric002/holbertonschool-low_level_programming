#include "lists.h"

/**
 * print_dlistint - Afficher elements d'une double liste
 * @h: l'en-tete de la double liste
 *
 * Return: Elements d'une double liste
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
