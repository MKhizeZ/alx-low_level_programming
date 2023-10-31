#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * Copy_File - Copies the content of one file to another.
 *
 * @file_from: Source file.
 * @file_to: Destination file.
 * return: 0 if successful, otherwise error code.
 */
int Copy_File(const char *file_from, const char *file_to)
{
	char buffer_size[1024];
	int FD_from, FD_to;
	ssize_t bytesRead, bytesWritten;

	FD_from = open(file_from, O_RDONLY);
	if (FD_from == -1)
	{
		perror("Error: Can't read from file");
		return (98);
	}

	FD_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (FD_to == -1)
	{
		perror("Error: Can't write to file");
		close(FD_from);
		return (99);
	}

	while ((bytesRead = read(FD_from, buffer_size, sizeof(buffer_size))) > 0)
	{
		bytesWritten = write(FD_to, buffer_size, bytesRead);
		if (bytesWritten == -1)
		{
			perror("Error: Can't write to file");
			close(FD_from);
			close(FD_to);
			return (99);
		}
	}

	if (bytesRead == -1)
	{
		perror("Error: Can't read from file");
		close(FD_from);
		close(FD_to);
		return (98);
	}

	if (close(FD_from) == -1 || close(FD_to) == -1)
	{
		perror("Error: Can't close fd");
		return (100);
	}

	return (0);
}

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int Store_Cont = Copy_File(file_from, file_to);

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	return (Store_Cont);
}
