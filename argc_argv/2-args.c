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
	int i = 0;

	for (i = 0; i < argc; i++)
	printf("\n%s", argv[i]);

	return (0);
}
