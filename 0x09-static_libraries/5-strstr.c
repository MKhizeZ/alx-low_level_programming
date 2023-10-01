#include "main.h"

/**
 * _strstr: Locates Substring
 * @haystack: input
 * @needle: input
 * Return: 0 Always (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = needle;
		char *i = haystack;

		while (*i == *j && *j != '\0')
		{
			j++;
			i++;
		}

		if (*j == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
