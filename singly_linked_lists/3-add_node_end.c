#include "lists.h"

/**
 * add_node_end - Ajouter new node à la fin d'ue liste
 * @head: en-tete
 * @str: string
 *
 * Return: new node ne fin de liste
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	int i;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = (char *)malloc(strlen(str) + 1);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		new_node->str[i] = str[i];
	}
	new_node->str[strlen(str)] = '\0';
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
