#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _calloc - entry
 * @nmemb: tableau d'element
 * @size: taille
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	char *ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		*(ptr + (i * size)) = 0;
	}

	return (ptr);
}
