#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string to convert
 *
 * Return: the int string converted
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int num = 0;
	int freq = 0;
	int size = 0;

	while (s[size] != '\0')
	   {
		size++;
	   }

	while (j < size && freq == 0)
	{
		if (s[j] == '-')
		{
			++i;
		}

		if (s[j] >= '0' && s[j] <= '9')
		{
			num = s[j] - '0';
			if (i % 2)
			{
				num = -num;
			}
			k = k * 10 + num;
			freq = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
			{
				return (0);
			}
			freq = 0;
		}
		j++;
	}

	if (freq == 0)
		return (0);

	return (k);
}
