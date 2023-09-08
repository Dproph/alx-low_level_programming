#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the sizes of various data types
 * on the computer it is compiled and run on.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of a float: %lu bytes\n", sizeof(float));

	return (0);
}
