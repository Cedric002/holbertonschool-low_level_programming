#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "3-calc.h"

/**
 * op_add - addition
 *
 * @a: nombre 1
 * @b: nombre 2
 *
 * Return: resultat addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - soustraction
 *
 * @a: nombre 1
 * @b: nombre 2
 *
 * Return: resultat soustraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @a: nombre 1
 * @b: nombre 2
 *
 * Return: resultat multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: nombre 1
 * @b: nombre 2
 *
 * Return: resultat division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulation
 *
 * @a: nombre 1
 * @b: nombre 2
 *
 * Return: operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
