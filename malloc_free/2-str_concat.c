#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * str_concat - entry
 * @s1: string 1
 * @s2: string 2
 *
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	int lenght1;
	int lenght2;
	char *concat = malloc((lenght1 + lenght2 + 1) * sizeof(char));

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
}
