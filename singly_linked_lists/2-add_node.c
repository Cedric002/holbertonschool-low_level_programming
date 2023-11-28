#include "lists.h"

/**
 * _strlen - longueur string
 * @str: string
 *
 * Return: strlen
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length])
		length++;

	return (length);
}

/**
 * add_node - Ajouter new node
 * @head: en-tete de la liste
 * @str: string
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp_node;

	tmp_node = *head;
	*head = malloc(sizeof(list_t));

	if (*head)
	{
		if (str)
		{
			(*head)->len = strlen(str);
			(*head)->str = strdup(str);
		}
		else
		{
			(*head)->len = 0;
			(*head)->str = "(nil)";
		}
		(*head)->next = tmp_node;
	}
	return (*head);
}
