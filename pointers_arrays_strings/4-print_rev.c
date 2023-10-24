#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_rev - entry
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	scanf("%s", s);

	strrev(s);
	return (0);
}
