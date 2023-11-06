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
	if (size == 0)
	{
		return (NULL);
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
