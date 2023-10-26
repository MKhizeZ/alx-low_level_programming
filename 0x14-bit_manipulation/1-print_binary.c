#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: the decimal number to be converted to binary and printed
 */
void print_binary(unsigned long int n)
{
    int count = 0;
    unsigned long int Current;
    int iter;
    
    iter = 63;
    while (iter >= 0)
    {
        Current = n >> iter;
        if (Current & 1)
        {
            _putchar('1');
	    count++;
        }
        else if (Current)
        {
            _putchar('0');
        }
	iter--;
    }
    if (!Current)
    {
        _putchar('0');
    }
}
