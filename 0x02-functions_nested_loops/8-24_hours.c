#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			int hour_tens = hour / 10;
			int hour_ones = hour % 10;
			int min_tens = minute / 10;
			int min_ones = minute % 10;

			_putchar('0' + hour_tens);
			_putchar('0' + hour_ones);
			_putchar(':');
			_putchar('0' + min_tens);
			_putchar('0' + min_ones);


			if (!(hour == 23 && minute == 59))
			{
				_putchar('\n');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
