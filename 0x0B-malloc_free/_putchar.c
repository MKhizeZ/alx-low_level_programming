#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints character c
 * @c: input character
 *
 * Return: On success 1, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
