#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: input str
 * @src: input str
 * @n: input int
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
     int i;
     int j;

     j = 0;
     while (dest[j] != '\0')
       {
	 j++;
       }
     i = 0;
     while (i < n && src[i] != '\0')
       {
	 dest[j] = src[i];
	 j++;
	 i++;
       }
	dest[j] = '\0';
	return (dest);
}
