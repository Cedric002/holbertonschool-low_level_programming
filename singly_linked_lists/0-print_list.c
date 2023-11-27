#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Afficher elements d'une liste
 * @h: l'en-tete de la liste
 *
 * Return: Number of elements in linked list
 *
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (h != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
		i++;
	}

	return (i);
}
