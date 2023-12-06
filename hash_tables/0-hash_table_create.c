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
	if (size < 0)
		return (NULL);

	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(void *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (size_t i = 0; i < ht->size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}
