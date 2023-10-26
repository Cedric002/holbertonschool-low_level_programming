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
	*dest[98] = "Hello ";
	*src[] = "World!";
	_strcat(dest, src);
	return (dest);
}
