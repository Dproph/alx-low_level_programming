#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a randon number and checks if it is positive, negative or zero and prints the result.
 *
 * return: Always 0.
*/

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number %d is ", n);
	if (n > 0)
	
{
	printf("positive\n");
}
	else if (n == 0)
{
	printf("zero\n");
}
	else
{
	printf("negative\n");
}

	return (0);
}

