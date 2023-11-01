#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strcat - entry
 * @dest: string 1
 * @src: string 2
 *
 * Return: dest + src
 */
char *_strcat(char *dest, char *src)
{
	int debu;
	int fin;

	debu = 0;

	while (dest[debu] != '\0')
	{
		debu++;
	}
	fin = 0;

	while (src[fin] != '\0')
	{
		dest[debu] = src[fin];
		debu++;
		fin++;
	}

	dest[debu] = '\0';
	return (dest);
}
