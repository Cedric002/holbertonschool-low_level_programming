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
	s = ("I do not fear computers. I fear the lack of them - Isaac Asimov");
	print_rev(s);
}
