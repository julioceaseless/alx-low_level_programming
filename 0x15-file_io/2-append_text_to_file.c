#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: text
 * Return: 1 (success) or -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, bytes = 0, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	/* get length of text */
	for (i = 0; text_content[i] != '\0'; i++)
		;

	if (i == 0)
		return (-1);

	/* write to file */
	bytes = write(fd, text_content, i);
	if (bytes < 0)
		return (-1);

	return (1);

}
