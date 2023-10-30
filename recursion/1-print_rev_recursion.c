#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _print_rev_recursion - affiche un string a l'envers (Recursion)
 * @s: string
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
