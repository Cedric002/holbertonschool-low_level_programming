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
	char lettre;

	for (lettre = 0; lettre <= 10; lettre++) 
	{

		for (lettre = 'a'; lettre <= 'z'; lettre++) 
		{
			putchar(lettre);
		}

		putchar('\n');
	}
}
