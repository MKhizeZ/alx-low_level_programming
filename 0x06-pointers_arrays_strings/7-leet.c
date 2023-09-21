#include "main.h"

/**
 * leet - encode 1337
 * @n: input
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{       i = 0;
		while (i < 10)
		{
			if (n[j] == s1[i])
			{
				n[j] = s2[i];
			}
			i++;
		}
	}
	return (n);
}
