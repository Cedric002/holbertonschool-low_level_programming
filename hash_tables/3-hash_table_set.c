#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set – Ajouter element a la hash table
 * @ht: Hash Table
 * @key: Clef
 * @value: Valeur associee a la clef
 *
 * Return: Element de la Hash Table
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (key == NULL || key[0] == '\0')
		return (0);

	unsigned long int index = hash_key(key) % ht->size;

	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
