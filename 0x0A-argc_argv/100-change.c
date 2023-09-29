#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Min coins for change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 Success,otherwise 1
 */
int main(int argc, char *argv[])
{
	int Value, iter, amount;
	int coins[] = {25, 10, 5, 2, 1};
        
	Value = atoi(argv[1]);
	amount = 0;
	if (Value < 0)
	{
            printf("0\n");
	    return (0);
	}

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

          iter = 0;
	while ( iter < 5 && Value >= 0)
	{
		while (Value >= coins[iter])
		{
			amount++;
			Value -= coins[iter];
		}
		iter++;
	}

	printf("%d\n", amount);
	return (0);
}
