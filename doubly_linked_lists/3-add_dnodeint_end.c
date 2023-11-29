#include "lists.h"

/**
 * add_dnodeint_end - Ajouter new node en fin de double liste
 * @head: l'en-tete de la liste
 * @n: new node
 *
 * Return: new node dans une liste
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	new_node->prev = current;
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
