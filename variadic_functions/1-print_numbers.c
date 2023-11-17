#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - entry
 * @separator: string
 * @n: nombre
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
