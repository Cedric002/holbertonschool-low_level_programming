#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _isdigit - entry
 * @c: prototype
 * Return:  0 or 1
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
