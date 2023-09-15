#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, k;
                   l = 1;
		while (l <= size)
		{
			for (k = l; k < size; k++)
			{
				_putchar(' ');
			}

			for (k = 1; k <= l; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
			l++;
		}
	}
}

