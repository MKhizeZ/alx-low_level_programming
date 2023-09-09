#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int pos;

	for (pos = 0; pos < 26; pos++)
	{
		putchar(alphabets[pos]);
	}
	putchar('\n');
	return (0);
}
