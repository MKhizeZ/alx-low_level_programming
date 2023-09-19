#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Pass_str[150];
	int i, j;

	int store = 0;	

	srand(time(NULL));
           j = 0;
	while (j < 150)
	{
		Pass_str[j] = rand() % 78;
		store = store + (Pass_str[j] + '0');
		putchar(Pass_str[j] + '0');
		if ((2401 - store) - '0' < 78)
		{
			i = 2401 - store - '0';
			store = store + i;
			putchar(i + '0');
			break;
		}
	      j++;
	}

	return (0);
}
