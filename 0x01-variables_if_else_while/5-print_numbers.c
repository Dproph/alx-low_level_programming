#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing all single digit numbes from 0-9
 *
 * Return: always (0)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
