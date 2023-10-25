#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * rev_string - entry
 * @s: string
 *
 * Return: 0
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
