#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iter = 0;
	va_list Values;

	va_start(Values, n);

	while (iter < n)
	{
		printf("%d", va_arg(Values, int));

		if (iter != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		iter++;
	}

	printf("\n");

	va_end(Values);
}
