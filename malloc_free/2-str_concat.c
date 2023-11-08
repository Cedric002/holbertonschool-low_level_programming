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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concat = malloc((i + j + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		concat[k] = s1[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		concat[i] = s2[k];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
