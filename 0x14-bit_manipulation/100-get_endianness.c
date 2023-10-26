#include <stdio.h>

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if small
 */
int get_endianness(void)
{
	int Digit = 1;
	char *end_ptr = (char *)&Digit;

	if (*end_ptr)
	{
		return (1); /* Little endian*/
	}
	else
		return (0); /* Big endian*/
}
