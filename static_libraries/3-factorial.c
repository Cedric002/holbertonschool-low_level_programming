#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * factorial - affiche la factorielle d'un nombre donné (Recursion)
 * @n: nombre
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}

	else if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}
	return (n);
}
