#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strncat - entry
 * @dest: string 1
 * @src: string 2
 * @n: value
 *
 * Return: dest + src
 */
char *_strncat(char *dest, char *src, int n)
{
	int p1;
	int p2;

	p1 = 0;
	while (dest[p1] != '\0')
	{
		p1++;
	}
	p2 = 0;
	while (p2 < n && src[p2] != '\0')
	{
		dest[p1] = src[p2];
		p1++;
		p2++;
	}
	dest[p1] = '\0';
	return (dest);
}
