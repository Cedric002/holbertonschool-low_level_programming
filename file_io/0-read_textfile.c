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
	ssize_t file, lett, writ;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	lett = read(file, text, letters);

	writ = write(STDOUT_FILENO, text, lett);

	close(file);

	return (writ);
}
