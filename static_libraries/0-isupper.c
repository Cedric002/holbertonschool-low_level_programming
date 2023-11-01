#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _isupper - Entry point
 * @c:
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
