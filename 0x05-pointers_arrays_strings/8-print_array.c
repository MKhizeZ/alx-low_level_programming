#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count <= (n - 1); count++)
	{
		printf("%d, ", a[count]);
	}
                  printf("\n");
}
