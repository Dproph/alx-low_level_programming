#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((row * col) <= 9 && col != 0)
			{
				_putchar(' ');
			}
			if (row * col <= 9)
			{
				_putchar('0' + ((row * col) / 10));
				_putchar('0' + ((row * col) % 10));
			}
		}
		_putchar('\n');
	}
}
