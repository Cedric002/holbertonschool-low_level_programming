#include <stddef.h>

/**
 * binary_search - searches a value sorted array using Binary search algorithm
 * @array: array
 * @size: size of array
 * @value: value to search
 *
 * Return: value in an array of integers
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int small;
	int middle;
	int big;

	if (array == NULL)
	{
		return (-1);
	}

	small = 0;
	big = size - 1;

	while (small <= big)
	{
		middle = small + (big - small) / 2;

		if (value == array[middle])
		{
			return (middle);
		}

		if (value > array[middle])
		{
			small = middle + 1;
		}
		else
		{
			big = middle - 1;
		}
	}

	return (-1);
}
