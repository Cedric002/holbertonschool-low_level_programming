#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strncpy - entry
 * @dest: string 1
 * @src: string 2
 * @n: value
 *
 * Return: copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];

	for ( ; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
