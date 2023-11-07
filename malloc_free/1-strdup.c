#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strdup - entry
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *copy = malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
