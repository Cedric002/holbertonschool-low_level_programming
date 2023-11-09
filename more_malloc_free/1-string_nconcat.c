#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * string_nconcat - entry
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *nconcat;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}

	nconcat = malloc(sizeof(char) * (len1 + n + 1));
	if (nconcat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		nconcat[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		nconcat[i] = s2[j];
	}
	nconcat[i] = '\0';

	return (nconcat);
}
