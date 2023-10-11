#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its own opcodes
 * @argc: Number of arguments
 * @argv: Argument array
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int byte_size, iter;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte_size = atoi(argv[1]);

	if (byte_size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;
        
	iter = 0;
	while (iter < byte_size)
	{
		if (iter == byte_size - 1)
		{
			printf("%02hhx\n", arr[iter]);
			break;
		}
		printf("%02hhx ", arr[iter]);
		iter++;
	}
	return (0);
}
