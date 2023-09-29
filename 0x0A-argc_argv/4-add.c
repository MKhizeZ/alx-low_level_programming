#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * num_check - checks for numbers
 * @str: array string
 *
 * Return: Always 0 (Success)
 */
int num_check(char *str)
{
	unsigned int iter;

	for (iter =0; iter < strlen(str); iter++)

	{
		if (!isdigit(str[iter])) /*check if str there are digit*/
		{
			return (0);
		}

	}
	return (1);
}

/**
 * main - adds numbers
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])

{

	int iter;
	int sum = 0;

	for (iter =1; iter < argc; iter++)
	{
		if (num_check(argv[iter]))

		{
			sum += atoi(argv[iter]);
		}

		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

