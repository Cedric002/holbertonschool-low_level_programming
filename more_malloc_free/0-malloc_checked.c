#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * malloc_checked - entry
 * @b: taille byte
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{

	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
