#include <stdio.h>

/**
 * main - prints all possible different combinations for three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int First_Dig, Sec_Dig, Third_Dig;

	for (First_Dig = 48; First_Dig < 58; First_Dig++)
	{
		for (Sec_Dig = 49; Sec_Dig < 58; Sec_Dig++)
		{
			for (Third_Dig = 50; Third_Dig < 58; Third_Dig++)
			{
				if (Third_Dig > Sec_Dig && Sec_Dig > First_Dig)
				{
					putchar(First_Dig);
					putchar(Sec_Dig);
					putchar(Third_Dig);
					if (First_Dig != 57 || Sec_Dig != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
