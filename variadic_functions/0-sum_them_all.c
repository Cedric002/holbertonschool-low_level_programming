#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - entry
 * @n: nombre
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
