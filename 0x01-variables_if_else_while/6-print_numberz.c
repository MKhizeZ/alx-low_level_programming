#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pos;

	for (pos = 48; pos < 58; pos++)
	{
		putchar(pos);
	}
	putchar('\n');
	return (0);
}

