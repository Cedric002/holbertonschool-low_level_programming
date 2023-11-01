#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strlen_recursion - affiche longueur d'un string (Recursion)
 * @s: string
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		_strlen_recursion(s + 1);
	}
	return (len);
}
