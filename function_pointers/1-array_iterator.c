#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function_pointers.h"

/**
 * array_iterator - fonction en paametre sur chaque elements tableau
 * @array: tableau
 * @size: taille
 * @action: pointeur de fonction
 *
 * Return: name
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
