#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_sign - Entry point
 * @c: entry point
 * Return: si characteres en minuscule afficher 1 sinon 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		putchar('0');
		return (0);
	}
	else if (c < 0)
	{
		putchar('-');
		return (-1);
	}
	return (0);
}
