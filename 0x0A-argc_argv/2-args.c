#include <stdio.h>
#include "main.h"

/**
 * main - prints all rewceived arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count = 0;
	while (count < argc)
	{
		printf("%s\n", argv[count]);
			count++;
	}
	return (0);
}
