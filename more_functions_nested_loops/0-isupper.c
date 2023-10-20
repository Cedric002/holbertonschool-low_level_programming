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
	char lettre;

	if (lettre >= 'A' && lettre <= 'Z')
		return (1);

	else
		return (0);
}
