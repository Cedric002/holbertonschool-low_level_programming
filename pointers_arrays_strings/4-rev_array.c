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
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
