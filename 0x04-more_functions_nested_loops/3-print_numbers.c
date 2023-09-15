#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char numbers = 48;

	while (numbers <= 57)
	{
		_putchar(numbers);
		numbers++;
	}
	_putchar('\n');
}
