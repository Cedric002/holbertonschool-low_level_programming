#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _memset - entry
 * @s: pointeur
 * @b: octet constant
 * @n: 1ers octets
 *
 * Return: reverse array
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
