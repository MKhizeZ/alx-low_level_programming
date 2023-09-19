#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;
	char *str_der = str;
	int k;

	while (*str_der != '\0')
	  {
		str_der++;
		i++;
	  }
	for (k = 0 ; k <= (i - 1) ; k++)
	   {
	      if (k % 2 != 0)
	          {
		    _putchar(str[k]);
	          }
	      k++ ;
	   }
	_putchar('\n');
}
