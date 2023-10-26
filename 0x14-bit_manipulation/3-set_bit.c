#include "main.h"

/**
 * set_bit - Sets a bit at the given index to 1
 * @n: A pointer to the number to be modified
 * @index: The index at which the bit should be set
 * Return: 1 if success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int Pos;

	Pos = index;
	if (Pos > 63)
	{
		return (-1);
	}

	*n |= (1UL << Pos);
	return (1);
}
