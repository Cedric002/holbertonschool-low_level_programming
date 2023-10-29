#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strchr - localise un caractere
 * @haystack: string
 * @needle: sous-chaine
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *debu = haystack;
		char *fin = needle;

		while (*haystack && *fin && *haystack == *fin)
		{
			haystack++;
			fin++;
		}

		if (!*fin)
			return (debu);

		haystack = debu + 1;
	}
	return (NULL);
}
