#include <stdio.h>

/**
 * main - prints two digits with different combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Fir_Dig, Sec_Dig;

	for (Fir_Dig = 48; Fir_Dig <= 56; Fir_Dig++)
	{
		for (Sec_Dig = 49; Sec_Dig <= 57; Sec_Dig++)
		{
			if (Sec_Dig > Fir_Dig)
			{
				putchar(Fir_Dig);
				putchar(Sec_Dig);
				if (Fir_Dig != 56 || Sec_Dig != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
