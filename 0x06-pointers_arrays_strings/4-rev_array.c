#include "main.h"

/**
 * reverse_array - reverse integer array
 * @a: array
 * @n: array size
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
    int j; 
    int k;
    j = 0;
      while (j < n--)
	{
		k = a[j];
		a[j] = a[n];
		a[n] = k;
		j++;
	}
}
