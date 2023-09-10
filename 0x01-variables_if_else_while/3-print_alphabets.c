#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing letters in upper and lower case
 *
 * Return: Always (0)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z');
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return 0;
}
