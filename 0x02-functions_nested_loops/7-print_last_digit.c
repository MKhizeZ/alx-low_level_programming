#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * 
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_dig;

	if (n < 0)
	{
 	  n = -n;
         
     	     if(n > 9)
	      {
 	        last_dig = n % 10;
	      }
	     else
		     last_dig = n;
	}
	else if (n >= 0)
	{
		if(n > 9)
              {
                last_dig = n % 10;
              }
             else
                     last_dig = n;
	}
	_putchar(last_dig + '0');

	return (last_dig);
}
