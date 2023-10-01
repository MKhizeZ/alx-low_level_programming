#include "main.h"

/**
 * _strchr - locates Character
 * @s: input
 * @c: input
 * Return: 0 Always (Success)
 */
char *_strchr(char *s, char c)
{
	int pos;

	for (pos = 0; s[pos] >= '\0'; pos++)
	{
		if (s[pos] == c)
		{
			return (&s[pos]);
		}
	}
	return (0);
}
