#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int iter = 0;
	char *str_ptr, *seperator = "";

	va_list Input_par;

	va_start(Input_par, format);

	if (format)
	{
		while (format[iter])
		{
			switch (format[iter])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(Input_par, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(Input_par, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(Input_par, double));
					break;
				case 's':
					str_ptr = va_arg(Input_par, char *);
					if (!str_ptr)
					 str_ptr = "(nil)";
					printf("%s%s", seperator, str_ptr);
					break;
				default:
					iter++;
					continue;
			}
			seperator = ", ";
			iter++;
		}
	}

	printf("\n");
	va_end(Input_par);
}
