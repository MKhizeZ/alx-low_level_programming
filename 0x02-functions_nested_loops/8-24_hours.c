#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour = 0;

	while (hour < 24)
	{
	        int minute;
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		
		}
		hour++;
	}
}
