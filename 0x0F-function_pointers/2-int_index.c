#include "function_pointers.h"

/**
 * int_index - Searches for an integer by indexing
 * @array: Array
 * @size: Number of elements
 * @cmp: Function pointer
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int iter = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	while (iter < size)
	{
		if (cmp(array[iter]))
		{
			return (iter);
		}
		iter++;
	}
	return (-1);
}
