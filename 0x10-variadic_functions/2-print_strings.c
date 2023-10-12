#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *str_ptr;
	unsigned int counter;

	va_start(str, n);
	counter = 0;

	while (counter < n)
	{
		str_ptr = va_arg(str, char *);

		if (str_ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str_ptr);
		}

		if (counter != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		counter++;
	}

	printf("\n");

	va_end(str);
}
