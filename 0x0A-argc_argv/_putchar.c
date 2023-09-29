#include <stdio.h>
#include "main.h"

/**
 * _putchar - Prints out character
 * @c: input/output character
 *
 * Return: 1 On success 1 otherwise -1
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
