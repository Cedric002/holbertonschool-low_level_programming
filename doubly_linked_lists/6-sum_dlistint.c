#include "lists.h"

/**
 * sum_dlistint - Renvoyer somme de toutes les donnees n d'une double chaine
 * @head: l'en-tete de la liste
 *
 * Return: somme de n
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		sum = tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
