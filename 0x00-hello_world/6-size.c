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
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of long: %lu bytes\n", sizeof(int));
	printf("Size of long long: %lu bytes\n", sizeof(long long int));
	printf("Size of float: %lu bytes\n", sizeof(float));

	return (0);
}
