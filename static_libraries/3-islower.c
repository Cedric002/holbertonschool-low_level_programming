#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _islower - Entry point
 * @c: entry point
 * Return: si characteres en minuscule afficher 1 sinon 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
