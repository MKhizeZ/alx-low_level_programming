
#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
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
	for (pos = 97; pos < 103; pos++)
	{
		putchar(pos);
	}
	putchar('\n');
	return (0);
}
