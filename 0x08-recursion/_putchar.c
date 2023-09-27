#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character c
 * @c: Character to print
 *
 * Return: 1 On success, -1 On error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
