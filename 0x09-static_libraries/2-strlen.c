#include "main.h"
/**
 * _strlen - returns string length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int Ch_ = 0;

	while (*s != '\0')
	{
		Ch_++;
		s++;
	}

	return (Ch_);
}
