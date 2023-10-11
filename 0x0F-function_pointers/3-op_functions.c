#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two numbers
 * @a: First argument variable
 * @b: Second argument variable
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Performs the difference of two numbers
 * @a: First argument variable
 * @b: Second argument variable
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: First argument variable
 * @b: Second argument variable
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: First argument variable
 * @b: SEcond argument variable
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Performs mod of two numbers
 * @a: First argument variable
 * @b: Second argumemt variable
 *
 * Return: The remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
