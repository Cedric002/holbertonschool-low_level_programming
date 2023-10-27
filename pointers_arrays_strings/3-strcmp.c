#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strcmp - entry
 * @s1: string 1
 * @s2: string 2
 *
 * Return: copy
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0;

    while (s1 != '\0' && s2 != '\0')
    {
        if (s1 != s2)
        {
            flag = 1;
        }
        s1++;
        s2++;
    }

 if (s1 != '\0'|| s2 !='\0')
       return 1;

    if (flag == 0)
        return 0;

    else
        return 1;
}
