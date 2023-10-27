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
	int rev_arr[n];

	for (int i = 0; i < n; i++)
	{
		rev_arr[i] = a[n - i - 1];
	}

	for (int i = 0; i < n; i++)
	{
		a[i] = rev_arr[i];
	}
}
