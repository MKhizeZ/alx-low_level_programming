#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory from malloc
 * @b: Bytes to allocate
 *
 * Return: allocated pointer
 */
void *malloc_checked(unsigned int b)
{
	void *P = malloc(b);

	if (P == NULL)
	{
		exit(98);
	}

	return (P);
}
