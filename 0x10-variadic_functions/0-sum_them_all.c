#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all the arguments
 * @n: Total parameters passed
 * @...: Parameter placeholder
 *
 * Return: 0, If n == 0, otherwise parameter sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list Par;
	unsigned int counter, sum = 0;

	va_start(Par, n);
	counter = 0;

	while (counter < n)
	{
		sum = sum + va_arg(Par, int);
		counter++;
	}

	va_end(Par);

	return (sum);
}
