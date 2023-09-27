#include "main.h"

int final_sqrt_recursion(int n, int i);

/**
 * final_sqrt_recursion - finds n natural sqrt by recursion
 * @n: input value
 * @i: iterator
 *
 * Return: square root value
 */
int final_sqrt_recursion(int n, int iter)
{
        if (iter * iter > n)
	{
		return (-1);
	}
        if (iter * iter == n)
	{
		return (iter);
	}
        return (final_sqrt_recursion(n, iter + 1));
}

/**
 * _sqrt_recursion - finds natural square root by rercusion
 * @n: input value
 *
 * Return: squre root n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (final_sqrt_recursion(n, 0);
}
