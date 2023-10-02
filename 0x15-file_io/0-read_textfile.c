#include "main.h"
/**
 * read_textfile - reads text from file and prints on the console
 * @filename: name of the file
 * @letters: number of letters to read
 * Return: number of characters read;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdescriptor = 0;
	char *buffer = NULL;
	ssize_t char_read = 0, char_written = 0;

	if (filename == NULL)
		return (0);

	fdescriptor = open(filename, O_RDONLY);
	if (fdescriptor == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	char_read = read(fdescriptor, buffer, letters);

	char_written = write(STDOUT_FILENO, buffer, char_read);

	if (char_written == -1 && char_written != char_read)
	{
		close(fdescriptor);
		return (0);
	}
	free(buffer);
	close(fdescriptor);
	return (char_read);
}
