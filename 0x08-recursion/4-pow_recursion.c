#include "main.h"

/**
 * _pow_recursion - calculates the value of x to the power y
 * @x: base
 * @y: exponent
 *
 * Return: Power x to the y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
