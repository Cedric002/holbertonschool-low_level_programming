#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
*print_most_numbers - entry
*
*Return: 0
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	putchar(c);
	}
	putchar('\n');
}
