#include "lists.h"

/**
 * list_len - Retourne le nombre d'elements d'une liste
 * @h: l'en-tete de la liste
 *
 * Return: Numbre d'elements dans une liste
 *
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
