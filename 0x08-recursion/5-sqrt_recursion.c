#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n. If n does not have a natural
 *         square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	return (-1);
	else if (n == 0 || n == 1)
	return (n);
	else
	{

	for (i = 1; i * i <= n; i++)
	{
	if (i * i == n)
	return (i);
	}
	return (-1);
	}
}
