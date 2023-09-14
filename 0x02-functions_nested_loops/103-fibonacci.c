#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the sum of even-valued terms
 * in the Fibonacci sequence up to 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		next = a + b;
		a = b;
		b = next;
	}

	printf("%ld\n", sum);

	return (0);
}
