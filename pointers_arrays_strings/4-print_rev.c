#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_rev - entry
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int index;

        while (s[index++])
		len++;

		for (index = len - 1; index >= 0; index--)
		putchar(s[index]);

		putchar('\n');
}
