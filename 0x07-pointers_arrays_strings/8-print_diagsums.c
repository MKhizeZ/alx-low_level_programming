#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Sum Diagonals
 * @a: input
 * @size: input
 * Return: 0 Always (Success)
 */
void print_diagsums(int *a, int size)
{
	int diag1_sum, diag2_sum, diag;

	diag1_sum = 0;
	diag2_sum = 0;
        diag = 0;

	while (diag < size)
	{
		diag1_sum += a[diag * size + diag];
		diag++;
	}

	for (diag = size - 1; diag >= 0; diag--)
	{
		diag2_sum = diag2_sum + a[diag * size + (size - diag - 1)];
	}

	printf("%d, %d\n", diag1_sum, diag2_sum);
}
