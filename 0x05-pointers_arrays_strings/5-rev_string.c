#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int i = 0;
	char Str_rev = s[0];
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i j++)
	{
		i--;
		Str_rev = s[j];
		s[j] = s[i];
		s[i] = Str_rev;
	}
}
