#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file
 * @filename: Name of the created file
 * @text_content: File content
 *
 * Return: 1 on sucess, else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int Folder;
	int In_Char = 0;
	int Read_Write;

	if (!filename)
	{
		return (-1);
	}

	Folder = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (Folder == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	while (text_content[In_Char])
	{
		In_Char++;
	}

	Read_Write = write(Folder, text_content, In_Char);
	close(Folder);

	return ((Read_Write == -1) ? -1 : 1);
}
