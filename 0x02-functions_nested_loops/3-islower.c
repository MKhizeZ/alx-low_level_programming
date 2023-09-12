#include "main.h"
/**
 * _islower - checks for lowercase char
 * Return - 1 for lowercase char otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
