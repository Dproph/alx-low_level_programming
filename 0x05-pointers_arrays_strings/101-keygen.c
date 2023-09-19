#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

int main() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char password[PASSWORD_LENGTH + 1];  // +1 for the null terminator
    int i;

    /* Initialize the random number generator with the current time */
    srand(time(NULL));

    /* Generate a random password */
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[PASSWORD_LENGTH] = '\0';  // Null-terminate the password

    printf("Generated password: %s\n", password);

    return 0;
}
