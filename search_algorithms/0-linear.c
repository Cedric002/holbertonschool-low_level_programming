#include "search_algos.h"

/**
 * linear_search - searches a value in an array using Linear search algorithm
 * @array: array
 * @size: size of array
 * @value: value to search
 *
 * Return: value in an array of integers
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
