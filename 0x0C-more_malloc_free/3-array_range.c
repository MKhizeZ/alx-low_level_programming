#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *P;
	int size, iter;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	P = malloc(sizeof(int) * size);

	if (P == NULL)
	{
		return (NULL);
	}
        
	iter = 0;
	while (min <= max)
	{
		P[iter] = min++;
		iter++;
	}

	return (P);
}
