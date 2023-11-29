#include "lists.h"

/**
 * add_dnodeint - Ajouter new node en debut de double liste
 * @head: l'en-tete de la liste
 * @n: new node
 *
 * Return: new node dans une liste
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)

		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
