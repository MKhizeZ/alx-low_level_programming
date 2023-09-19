#include "main.h"
/**
 * print_rev - reverse string
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int Ch_Rev = 0;
	int Ch_holder;

	while (*s != '\0')
	{
		Ch_Rev++;
		s++;
	}
	s--;
	Ch_holder = Ch_Rev; 
        while(Ch_Rev > 0)
	{  
	   Ch_holder--
	   _putchar(*s);
	   s--;
	}

	_putchar('\n');
}
