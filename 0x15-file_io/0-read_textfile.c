#include "main.h"
/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdescriptor = 0;
	char buffer[1024];
	ssize_t total_read = 0;
	ssize_t char_read;
	ssize_t char_written = 0;

	if (filename == NULL)
		return (0);

	fdescriptor = open(filename, O_RDONLY);
	if (fdescriptor == -1)
	{
		return (0);
	}

	while (letters > 0)
	{
		char_read = read(fdescriptor, buffer, sizeof(buffer));
		if (char_read == -1)
		{
			close(fdescriptor);
			return (0);
		}

		if (char_read == 0)
			break;

		char_written = write(STDOUT_FILENO, buffer, char_read);

		if (char_written == -1 || char_written != char_read)
		{
			close(fdescriptor);
			return (0);
		}

		total_read +=char_read;
		letters -= char_read;
	}
	close(fdescriptor);
	return (total_read);





}
