#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: Funtion generates a randon number and prints its last digit
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int n;
	int lastDigit;
	char *;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = abs(n) % 10;
	*comparison = (n < 0) ? "and is less than 6 and not 0" : "and is";
	printf("Last digit of %d is %d %s ", n, lastDigit, comparison);
	
	if (lastDigit > 5)
{
		printf("greater than 5\n");
}
	else if (lastDigit == 0)
{
		printf("0\n");
}
	else
{
		printf("less than 6 and not 0\n");
}
	return (0);
}
