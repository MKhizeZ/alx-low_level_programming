#include "main.h"

/**
 * _strpbrk - Search Stringh
 * @s: input
 * @accept: input
 * Return: 0 Always (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			i = 0;
			while (accept[i])
			{
			  if (*s == accept[i])
			    {
				    return (s);
			    }
			i++;
			}
		s++;
		}

	return ('\0');
}
