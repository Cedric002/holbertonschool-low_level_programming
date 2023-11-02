#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * @argc: argument
 * @argv: tableau
 *
 * Return: nb argument
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%d: [%s]\n", i, argv[i]);
	}

	return (0);
}
