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
	int len;

	if (s[len] == '\0')
		return (len);
	_strlen_recursion(s, len++);
}
