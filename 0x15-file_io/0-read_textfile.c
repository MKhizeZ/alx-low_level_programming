#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int Folder;
	char *In_Char;
	ssize_t Write_File, Read_File;

	if (!filename)
	{
		return (0);
	}

	Folder = open(filename, O_RDONLY);
	if (Folder == -1)
	{
		return (0);
	}

	In_Char = malloc(letters);

	if (!In_Char)
	{
		close(Folder);
		return (0);
	}

	Read_File = read(Folder, In_Char, letters);
	Write_File = write(STDOUT_FILENO, In_Char, Read_File);

	close(Folder);
	free(In_Char);

	return (Write_File);
}
