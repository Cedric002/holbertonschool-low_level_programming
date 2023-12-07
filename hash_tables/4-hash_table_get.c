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
	hash_node_t *key_node;
	unsigned long int index;

	if (ht && key)
	{
		index = key_index((const unsigned char *)key, ht->size);

		if (ht->array[index])
		{
			key_node = ht->array[index];

			while (key_node)
			{
				if (strcmp(key_node->key, (char *)key) == 0)
					return (key_node->value);

				key_node = key_node->next;
			}
		}
	}
	return (NULL);
}
