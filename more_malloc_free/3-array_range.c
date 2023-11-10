#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * array_range - entry
 * @min: int minimum
 * @max: int maximum
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *range_array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	range_array = malloc(size * sizeof(int));

	if (range_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		range_array[i] = min + i;
	}

	return (range_array);
}
