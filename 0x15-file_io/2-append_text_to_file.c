#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Content file
 * @text_content: Appended Content
 *
 * Return: 1 for success, -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int total_chars = 0;
	int bytes_written;

	if (!filename)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[total_chars])
		{
			total_chars++;
		}

		bytes_written = write(file_descriptor, text_content, total_chars);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
