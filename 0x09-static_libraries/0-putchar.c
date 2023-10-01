#include <unistd.h>


/**
 * _putchar - prints character
 * @c: argument character
 *
 * Return: On success 1, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
