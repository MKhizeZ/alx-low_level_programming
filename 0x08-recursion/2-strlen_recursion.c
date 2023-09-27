#include "main.h"

/**
 * _strlen_recursion - calculate string length.
 * @s: Input string.
 *
 * Return: Return string length.
 */

int _strlen_recursion(char *s)
{
	int length_it = 0;

	if (*s)
	{
		length_it++;
		length_it = length_it +  _strlen_recursion(s + 1);
	}

	return (length_it);
}
