#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index in a decimal number
 * @n: Decimal number
 * @index: The index of the bit
 * Return: The value of the bit at the given index, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int Pos;

	Pos = index;
	if (Pos > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
