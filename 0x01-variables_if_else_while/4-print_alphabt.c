#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pos;

	for (pos = 97; pos < 123; pos++)
	{
		if (pos != 101 && pos != 113)
		{
			putchar(pos);
		}
	}
	putchar('\n');
	return (0);
}
