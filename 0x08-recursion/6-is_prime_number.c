#include "main.h"

/**
 * is_prime_number - Check if a given integer is a prime number.
 *
 * @n: The integer to check.
 *
 * Return: 1 if the integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
    int i;

    /* Check if n is less than 2, which is not a prime number. */
    if (n < 2) {
        return 0;
    }

    /* Check if n is divisible by any integer from 2 to sqrt(n). */
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    /* If n is not divisible by any integer from 2 to sqrt(n), then it is a prime number. */
    return 1;
}

