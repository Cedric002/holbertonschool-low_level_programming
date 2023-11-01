#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _puts - entry
 * @str: string
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
	putchar(*str++);

	putchar('\n');
}
