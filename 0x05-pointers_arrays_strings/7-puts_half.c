#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, k, j;

	k = 0;
	i = 0;

	while (str[i] != '\0')
	    { 
		k++;
		i++;
	    }
	j = (k / 2);

	     if ((k % 2) == 1)
	     {
		     j = ((k + 1) / 2);
	     }
	    
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
