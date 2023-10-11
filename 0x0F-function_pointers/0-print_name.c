#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints the name
 * @name: Input string
 * @f: Function pointer
 * Return: Nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
