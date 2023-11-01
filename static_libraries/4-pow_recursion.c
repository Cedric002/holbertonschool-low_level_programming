#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _pow_recursion - Afficher valeur x eleve a la puissance y (Recursion)
 * @x: nombre 1
 * @y: nombre 2
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	if (y < 0)
		return (_pow_recursion(x, y + 1) / x);

	return (_pow_recursion(x, y - 1) * x);
}
