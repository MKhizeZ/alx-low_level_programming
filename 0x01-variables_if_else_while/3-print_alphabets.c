#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int pos;

	for (pos = 0; pos < 52; pos++)
	{
		putchar(alphabets[pos]);
	}
	putchar('\n');
	return (0);
}
