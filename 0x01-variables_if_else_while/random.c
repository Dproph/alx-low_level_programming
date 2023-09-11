#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    // Extract the last digit while preserving the sign
    int lastDigit = n % 10;

    printf("Random number: %d, Last digit: %d\n", n, lastDigit);

    return (0);
}

