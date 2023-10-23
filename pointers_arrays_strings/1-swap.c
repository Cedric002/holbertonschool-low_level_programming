#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * swap_int - entry
 * @a: value 1
 * @b: value 2
 *
 * Return: a->b & b->a
 */
void swap_int(int *a, int *b)
{
	int temporaire;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}
