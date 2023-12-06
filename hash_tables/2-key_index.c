#include "hash_tables.h"

/**
 * key_index - Donner l'index de la clef
 * @key: clef
 * @size: taille du tableau du Hash Table
 *
 * Return: Index de la clef
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
