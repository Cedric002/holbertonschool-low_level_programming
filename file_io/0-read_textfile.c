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
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	char *buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	ssize_t bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten != bytesRead)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (bytesRead);
}
