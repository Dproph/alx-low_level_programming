#include "main.h"

/**
 * print_triangle - Prints a triangle of a specified size.
 * @size: The size of the triangle.
 *
 * Description: If size is 0 or less, only a new line is printed.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size - i - 1; j++)
	{
	_putchar(' ');
	}
	for (j = 0; j < i + 1; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
