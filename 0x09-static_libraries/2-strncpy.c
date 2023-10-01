#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input str
 * @src: input str
 * @n: input int
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
      int i;

      i = 0;
      while (i < n && src[i] != '\0')
        {
	   dest[i] = src[i];
	   i++;
	}
	int j ;
      for (j = i; j < n; j++)
	{
		dest[j] = '\0';

	}

	return (dest);
}
