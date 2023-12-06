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
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;

	table->items = (void **)calloc(size, sizeof(void *));

	if (table->items == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
