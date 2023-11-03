#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _puts_recursion - affiche un string (Recursion)
 * @s: string
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}

	else
		putchar('\n');
}
