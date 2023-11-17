#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - entry
 * @separator: string
 * @n: nombre
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		va_end(args);
	}
	 printf("\n");
}
