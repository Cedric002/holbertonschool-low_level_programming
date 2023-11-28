#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Afficher elements d'une liste
 * @h: l'en-tete de la liste
 *
 * Return: Elements dans une liste
 *
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else

			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
