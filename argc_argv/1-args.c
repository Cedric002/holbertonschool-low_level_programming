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
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");

	return (0);
}
