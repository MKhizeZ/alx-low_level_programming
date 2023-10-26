#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: A string representing a binary number
 * Return: The converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int iter;

	if (!b)
	{
		return (0);
	}

	iter = 0;

	while (b[iter] != '\0')
	{
		if (b[iter] < '0' || b[iter] > '1')
		{
			return (0);
		}
		result = (result << 1) | (b[iter] - '0');
		iter++;
	}
	return (result);
}
