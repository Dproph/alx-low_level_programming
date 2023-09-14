#include <stdio.h>
#include "main.h"

/* Prototype for the _putchar function */
int _putchar(char c);

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

    /* Print the first two Fibonacci numbers */
    _putchar('1');
    _putchar(',');
    _putchar(' ');
    _putchar('2');

    /* Calculate and print the remaining Fibonacci numbers */
    for (count = 2; count < 50; count++)
    {
        next = a + b;
        _putchar(',');
        _putchar(' ');
        printf("%ld", next);
        a = b;
        b = next;
    }

    /* Print a newline character */
    _putchar('\n');

    return (0);
}

/* Definition of the _putchar function */
int _putchar(char c)
{
    return write(1, &c, 1);
}

