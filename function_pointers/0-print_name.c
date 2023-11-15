#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function_pointers.h"

/**
 * print_name - affiche nom
 * @name: nom
 * @f: fonction
 *
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
