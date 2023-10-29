#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n chars from second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to concatenate from s2.
 *
 * Return: Pointer to the concatenated string on sucess
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc_str;
	unsigned int str_len1 = 0, str_len2 = 0, iter = 0;

	if (s1 != NULL)
	{
		while (s1[str_len1] != '\0')
		{
			str_len1++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[str_len2] != '\0')
		{
			str_len2++;
		}
	}

	if (str_len2 > n)
	{
		str_len2 = n;
	}

	conc_str = malloc(sizeof(char) * (str_len1 + str_len2 + 1));
	if (conc_str == NULL)
		return (NULL);

	for (iter = 0; iter < str_len1; iter++)
	{
		conc_str[iter] = s1[iter];
	}

	for (iter = 0; iter < str_len2; iter++)
	{
		conc_str[iter + str_len1] = s2[iter];
	}
	conc_str[str_len1 + str_len2] = '\0';
	return (conc_str);
}
