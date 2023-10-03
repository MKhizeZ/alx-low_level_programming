#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array with a size of size assigning char c
 * @size: array size
 * @c: input character
 * Return: pointer to array or NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int count;

        p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		p[count] = c;
	}
	return (p);
}
