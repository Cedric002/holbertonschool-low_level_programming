#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function_pointers.h"

/**
 * int_index - index du 1er element
 * @array: tableau
 * @size: taille
 * @cmp: pointeur
 *
 * Return: name
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
