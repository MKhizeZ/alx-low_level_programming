#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int digit1;
	long int l;
	long int max;

        max = -1;
	digit1 = 612852475143;

	while (digit1 % 2 == 0)
	{
		max = 2;
		digit1 /= 2;
	}

	for (l = 3; l <= sqrt(digit1); l = l + 2)
	{
		while (digit1 % l == 0)
		{
			max = l;
			digit1 = digit1 / l;
		}
	}

	if (digit1 > 2)
		max = gidit1;

	printf("%ld\n", max);

	return (0);
}

