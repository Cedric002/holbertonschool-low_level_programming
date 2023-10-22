#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 *print_numbers - entry
 *
 *Return: c
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
