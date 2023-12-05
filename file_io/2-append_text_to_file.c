#include "main.h"

/**
 * append_text_to_file - lire un fichier texte et afficher sur sortie POSIX
 * @filename: nom fichier
 * @text_content: string en fin de fichier
 *
 * Return: 1 (success)
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "append");

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	if (file == NULL)
	{
		return (-1);
	}

	fputs(text_content, file);
	fclose(file);

	return (1);
}
