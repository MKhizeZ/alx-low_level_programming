#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int l, m, x;

	if (n >= 0 && n <= 15)
	{      l = 0;
		while (l <= n)
		{      
			for(m =0; m <= n; m++)
			{
				x = m * l;
				if (m == 0)
				{
					_putchar(x + '0');
				} 
			       	  else if (x < 10 && m != 0)
				   {
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				   }
				    else if (x >= 10 && x < 100)
				      {
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				      }
			       	        else if (x >= 100)
				         {
					    _putchar(',');
					    _putchar(' ');
					    _putchar((x / 100) + '0');
					    _putchar(((x / 10) % 10) + '0');
					   _putchar((x % 10) + '0');
					 }
			}
			  _putchar('\n');
			l++;

		}
	}
}
