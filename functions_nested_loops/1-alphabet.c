#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char lettre;

        for (lettre = 'a'; lettre <= 'z'; lettre++)
                putchar(lettre);

        putchar('\n');

        return (0);
}
