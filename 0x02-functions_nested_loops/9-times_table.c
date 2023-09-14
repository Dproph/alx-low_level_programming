#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;
			
			if (col == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (product <= 9)
				{
					_putchar(' ');
				}
			}

			if (product <= 9)
			{
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}

			if (col == 9)
			{
				_putchar('\n');
			}
		}
	}
}
