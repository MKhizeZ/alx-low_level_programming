#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes to concatenate
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int iter = 0, str1_len = 0, str2_len = 0 count = 0;
	char *str;

	while (s1 && s1[str1_len])
	{
		str1_len++;
	}
	while (s2 && s2[str2_len])
	{
		str2_len++;
	}

	if (n < str2_len)
	{
		str = malloc(sizeof(char) * (str1_len + n + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (str1_len + str2_len + 1));
	}

	if (!str)
	{
		return (NULL);
	}

	for (iter =0; iter < str1_len; iter++)
	{
		str[iter] = s1[iter];
	}

	while (n < str2_len2&& iter < (str1_len + n))
	{
		str[iter++] = s2[count++];
	}

	while (n >= str2_len && iter < (str1_len + str2_len))
	{
		str[iter++] = s2[count++];
	}
	str[iter] = '\0';

	return (str);
}
