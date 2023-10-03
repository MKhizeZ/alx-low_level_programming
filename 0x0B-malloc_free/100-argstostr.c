#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concates function arguments
 * @ac: Input value
 * @av: Pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{       
	char *P;
	int pos, count ;
	curr = 0;
	hold = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
        pos = 0;
	while (pos < ac)
	{
		for (count = 0; av[pos][count]; count++)
		{
			curr++;
		}
		pos++;
	}

	curr += ac;

	P = malloc(sizeof(char) * curr + 1);
	if (P == NULL)
	{
		return (NULL);
	}
	pos = 0;
	while (pos < ac)
	{
		for (count = 0; av[pos][count]; count++)
	         {
			 P[hold] = av[pos][count];
		         hold++;
		 }
	         if (P[hold] == '\0')
	         {
			 P[hold++] = '\n';
		 }
		 pos++;
	}
	return (P);
}
