#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strchr - localise un caractere
 * @s: string
 * @c: character
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	char *paragraf = s;
	int index = 0;

	while (*s != c)
	{
		s++;
		index++;
	}

	if (*s == c)
	{
		return (paragraf + index);
	}

	else
	{
		return (0);
	}
}
