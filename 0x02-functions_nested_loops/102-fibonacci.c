#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers,
 * separated by a comma and a space, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next;
	int count;

	printf("%ld, %ld", a, b);

	for (count = 2; count < 50; count++)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
