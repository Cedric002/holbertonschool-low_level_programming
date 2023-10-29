#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strspn - longueur prefix
 * @s: segment
 * @accept: octets
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;

	for ( ; *s && *s == *accept; s++, accept++)
	{
		n++;
	}

	return (n);
}
