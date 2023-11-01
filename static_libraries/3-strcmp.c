#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strcmp - entry
 * @s1: string 1
 * @s2: string 2
 *
 * Return: copy
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
