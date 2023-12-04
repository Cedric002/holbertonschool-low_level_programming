#include "main.h"

/**
 * read_textfile - lire un fichier texte et afficher sur sortie POSIX
 * @filename: nom fichier
 * @letters: nombre de lettres à lire et afficher
 *
 * Return: Nombre lettre qu'il peux lire et afficher
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	char buffer[letters + 1];

	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);

	fclose(file);

	if (bytesRead != letters)
	{
		return (0);
	}

	ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

	if (bytesWritten != bytesRead)
	{
		return (0);
	}

	return (bytesRead);
}
