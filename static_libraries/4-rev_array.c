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
	int tab;

	for (i = 0; i < n / 2; i++)
	{
		tab = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tab;
	}
}
