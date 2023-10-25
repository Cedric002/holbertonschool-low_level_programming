#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * puts2 - entry
 * @str: string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{

		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}

	putchar('\n');

}
