#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * create_array - entry
 * @size: taille tableau
 * @c: caracteres
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
