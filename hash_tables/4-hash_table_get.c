#include "hash_tables.h"

/**
 * hash_table_get - recuperer valeur associee a la clef
 * @ht: hash table
 * @key: key
 *
 * Return: valeur a la clef
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **array, *temp;

	index = key_index((const unsigned char *)key, ht->size);

	array = ht->array;

	if (!ht)

		return (NULL);

	if (!key || key[0] == '\0')

		return (NULL);

	temp = array[index];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)

			return (temp->value);

		temp = temp->next;
	}
	return (NULL);
}
