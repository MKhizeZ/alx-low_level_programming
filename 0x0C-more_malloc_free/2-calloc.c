#include <stdlib.h>
#include "main.h"

/**
 * *_memset - constant byte memory
 * @s: memory to fill
 * @b: char to copy
 * @n: number of copies for char b
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iter;
	iter = 0;

	while (iter < n)
	{
		s[iter] = b;
		iter++;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: array size
 * @size: element size
 *
 * Return: Allocated memory pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *P;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	P = malloc(size * nmemb);

	if (P == NULL)
	{
		return (NULL);
	}

	_memset(P, 0, nmemb * size);

	return (P);
}
