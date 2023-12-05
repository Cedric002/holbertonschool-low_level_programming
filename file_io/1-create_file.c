#include "main.h"

/**
 * create_file - creer un fichier
 * @filename: nom fichier
 * @text_content: string
 *
 * Return: fichier creer
 *
 */
int create_file(const char *filename, char *text_content)
{
	FILE *new_fichier = fopen(filename, "w");

	if (filename == NULL)
	{
		return (-1);
	}

	if (new_fichier == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fputs(text_content, new_fichier);
	}

	fclose(new_fichier);

	return (1);
}
