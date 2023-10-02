#include "main.h"
/**
 * create_file - creates a file and write text to it.
 * @filename: name of the file
 * @text_content: text to write to file
 * Return: 1 (success) or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, bytes = 0, i;

	if (filename == NULL)
		return (-1);

	/* open file if exists or create it if non-existent */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (*text_content != '\0')
	{
		/* get length of string */
		for (i = 0; text_content[i] != '\0'; i++)
			;

		/* write string to file */
		bytes = write(fd, text_content, i);
		if (bytes < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
