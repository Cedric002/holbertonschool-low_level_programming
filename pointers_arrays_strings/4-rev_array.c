#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * reverse_array - entry
 * @a: array
 * @n: octet
 *
 * Return: reverse array
 */
void reverse_array(int *a, int n)
{
	int i;
	int tab[n];

	for (i = 0; i < n; i++)
	{
		tab[n - 1 - i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = tab[i];
	}
}
