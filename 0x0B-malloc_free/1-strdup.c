#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - pointer to newly allocated space
 * @str: returned pointer
 * Return: 0
 */
char *_strdup(char *str)
{
	int pos, count = 0;
	char *P;

	if (str == NULL)
	{
		return (NULL);
	}

	pos = 0;

	while (str[pos] != '\0')
	{
		pos++;
	}

	P = malloc(sizeof(char) * (pos + 1));

	if (P == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count]; count++)
	{
		P[count] = str[count];
	}

	return (P);
}
