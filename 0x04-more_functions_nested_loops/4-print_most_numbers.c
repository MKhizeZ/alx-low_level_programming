#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char numbers = 48;

	while (numbers <= 57)
	{
		if (!(numbers == 50 || numbers == 52))
			_putchar(numbers);
		numbers++;
	}
	_putchar('\n');
}

