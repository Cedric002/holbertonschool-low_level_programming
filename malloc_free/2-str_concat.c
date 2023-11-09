#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * str_concat - entry
 * @s1: string 1
 * @s2: string 2
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat = NULL;
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		concat[i] = s2[j];
	}
	concat[i] = '\0';

	return (concat);
}
