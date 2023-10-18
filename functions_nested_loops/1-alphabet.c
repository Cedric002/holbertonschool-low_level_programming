#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
		putchar(lettre);

	putchar('\n');
}
