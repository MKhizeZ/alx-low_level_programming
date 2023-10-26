#include "main.h"

/**
 * clear_bit - Clears a bit at a given index in a number
 * @n: A pointer to the number to be modified
 * @index: The index of the bit to be cleared
 *
 * Return: 1 if success, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int Pos;

	Pos = index;
	if (Pos > 63)
	{
		return (-1);
	}

	*n &= ~(1UL << Pos);
	return (1);
}
