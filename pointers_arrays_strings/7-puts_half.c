#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 *puts_half - entry
 *@str: string
 *
 *Return:void
 */
void puts_half(char *str)
{
	int len = _strlen(str);

	if (len % 2 == 0)
		len = len / 2;

	else
		len = (len + 1) / 2;

	while (str[len] != '\0')
	{
		putchar(str[len]);
		len++;
	}
	putchar('\n');
}
