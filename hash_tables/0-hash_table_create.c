#include "hash_tables.h"

/**
 * hash_table_create - creer un Hash Table
 * @size: taille tableau
 *
 * Return: Hash Table creer
 *
 */

hash_table_t *hash_table_create(unsigned long size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->array = malloc(size * sizeof(hash_node_t *));

	if (ht->array == NULL)
	{
		return (NULL);
	}

	ht->size = size;

	return (ht);
}
