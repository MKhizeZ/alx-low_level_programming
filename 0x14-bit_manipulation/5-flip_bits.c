#include "main.h"

/**
 * flip_bits - checks the number of bits to be changed
 * @n: First number
 * @m: Last number
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int Place_holder = 0;
	unsigned long int Prev = n ^ m;

	while (Prev > 0)
	{
		Place_holder += Prev & 1;
		Prev >>= 1;
	}

	return (Place_holder);
}
