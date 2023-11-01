#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
		putchar((nb % 10) + '0');

	putchar('\n');

	return (0);
}
