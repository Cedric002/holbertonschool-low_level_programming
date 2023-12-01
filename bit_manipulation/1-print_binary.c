#include "main.h"

/**
 * print_binary - Afficher version binaire d'un nombre
 * @n: Nombre
 *
 * Return: Nombre en binaire
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
