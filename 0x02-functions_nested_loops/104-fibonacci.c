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
	unsigned long int a = 1, b = 2, next;
	int count;

	printf("%lu", a);

	for (count = 1; count < 98; count++)
	{
		printf(", %lu", b);
		next = a + b;
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
