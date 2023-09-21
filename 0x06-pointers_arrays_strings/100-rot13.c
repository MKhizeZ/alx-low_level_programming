#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char str_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (j = 0; s[j] != '\0'; j++)
	{       i = 0;
		while (i < 52)
		{
			if (s[j] == str[i])
			{
				s[j] = str_rot[i];
			        return (s);
			}
			i++;
		}
	}
	return (s);
}
