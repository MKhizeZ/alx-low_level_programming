#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on Success, 1 for Error
 */
int main(int argc, char *argv[])
{
	int answ, Val1, Val2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	Val1 = atoi(argv[1]);
	Val2 = atoi(argv[2]);
	answ = Val1 * Val2;

	printf("%d\n", answ);

	return (0);
}
