#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints character
 * @c: printed character
 *
 * Return: 1 On success, -1 on error
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
