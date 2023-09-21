#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints char c to stdout
 * @c: The character to print
 *
 * Return:1 On success, -1 on error
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
