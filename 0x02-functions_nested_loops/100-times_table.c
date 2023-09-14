#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The value to determine the size of the times table.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int row, col, product;

		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				product = row * col;

				if (col != 0)
				{
					_putchar(',');
					_putchar(' ');
				}

				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product <= 99)
				{
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else
				{
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}
			}
			_putchar('\n');
		}
	}
}

