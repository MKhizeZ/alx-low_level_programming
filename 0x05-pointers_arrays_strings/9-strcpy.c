#include "main.h"

/**
 * char *_strcpy - Copies the string pointed to by src
 * @dest: string to copy to
 * @src: string to copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	int i = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0 ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
