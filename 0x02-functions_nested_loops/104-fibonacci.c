#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Calculates and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int a = 1, b = 2, next;
	int count;

	printf("%u, %u", a, b);

	for (count = 2; count < 98; count++)
	{
		next = a + b;
		printf(", %u", next);
		a = b;
		b = next;
	}
	printf("\n");

	return (0);
}
