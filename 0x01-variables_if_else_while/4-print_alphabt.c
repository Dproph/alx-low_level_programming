#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print lowercase alphabets
 *
 * Return: always (0)
*/

int main(void)
{
	char letter = 'a';

	printf(letter);
	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	letter++;
	}
	printf("\n");
	
	return (0);
}
