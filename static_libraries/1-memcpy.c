#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _memcpy - copie n octets
 * @dest: zone memoire 1
 * @src: zone memoire 2
 * @n: 1ers octets
 *
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pszDest = (char *)dest;
	const char *pszSource = (const char *)src;

	if ((pszDest != NULL) && (pszSource != NULL))
	{
		while (n)
		{
			*(pszDest++) = *(pszSource++);
			--n;
		}
	}
	return (dest);
}
