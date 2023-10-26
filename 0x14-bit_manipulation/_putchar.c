#include <unistd.h>

/**
 * _putchar - Prints Character
 *
 * @c: Input Char
 * return: 1 if success, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
