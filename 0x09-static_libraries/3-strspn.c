#include "main.h"

/**
 * _strspn - Prefix Length
 * @s: input
 * @accept: input
 * Return: 0 Always (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int pos;
	unsigned int i = 0;

	while (*s)
	{       
		pos = 0;
		while (accept[pos])
		{
			if (*s == accept[pos])
			{
				i++;
				return (i);
			}
			else if (accept[pos + 1] == '\0')
			{
				return (i);
			}
                        pos++;
		}
		s++;
	}
	return (i);

	}
