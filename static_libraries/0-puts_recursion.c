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
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_putchar('\n');

	_puts_recursion(s);
}
