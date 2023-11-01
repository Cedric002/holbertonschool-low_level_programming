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
	unsigned int length = 0;

	if ((s == NULL) || (accept == NULL))
		return (length);

	while (*s && _strchr(accept, *s++))
	{
		length++;
	}
	return (length);
}
