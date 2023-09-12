#include "main.h"
/**
 * print_alphabet_x10 - print alphabets in lowercase_x10
 */
void print_alphabet_x10(void)
{     
	int iteration = 0;
	while (iteration < 10)
	{
      	  char alphabet = 97 ;
            while (alphabet <= 122)
               {
                   _putchar(alphabet) ;
                   alphabet++ ;
               }
          _putchar('\n');
	  iteration++ ;
	}
}
