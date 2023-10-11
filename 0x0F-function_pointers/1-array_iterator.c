#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter
 * @array: Pointer array
 * @size: Number of elements to print
 * @action: Output pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iter = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (iter < size)
	{
		action(array[iter]);
		iter++;
	}
}
