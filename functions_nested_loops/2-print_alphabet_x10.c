#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int r;
	char lettre;

	for (r = 0; r < 10; r++)
	{

		for (lettre = 'a'; lettre <= 'z'; lettre++)
		{
			putchar(lettre);
		}

		putchar('\n');
	}
}
