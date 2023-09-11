#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing single digigt numbers of base 10
 *
 * Return: always (0)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');

	return (0);
}

