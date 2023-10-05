#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Reallocates a memory block
 * @ptr: Pointer to previously occupied memory
 * @old_size: Size of allocated memory
 * @new_size: New memory block size
 *
 * Return:Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *P1;
	char *P2;
	unsigned int iter;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}

	P2 = malloc(new_size);
	if (!P2)
	{
		return (NULL);
	}

	P1 = ptr;

	if (new_size < old_size)
	{       
		iter =0;
		while (iter < new_size)
		{
			P2[iter] = P1[iter];
		}
	}

	if (new_size > old_size)
	{
		for (iter = 0; iter < old_size; iter++)
		{
			P2[iter] = P1[iter];
		}
	}

	free(ptr);
	return (P2);
}
