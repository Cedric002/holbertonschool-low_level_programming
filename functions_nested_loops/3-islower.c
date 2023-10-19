#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * int _islower(int c) - Entry point
 * @int c
 * Return: si characteres en minuscule afficher 1 sinon 0
 */
int _islower(int c)
{
	scanf("%c", &c);
	
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
