#include "main.h"

/**
 * prime_check - Checks to see if number is prime
 *
 * @f: Factor check
 * @p: Possible prime number
 *
 * Return: 1 if prime, 0 otherwise
 */

int prime_check(int w, int p)
{
	if (p < 2 || p % w == 0)
		return (0);
	else if (w > p / 2)
		return (1);
	else
		return (prime_check(w + 1, p));
}

/**
 * is_prime_number - States if number is prime
 *
 * @n: Number to check
 *
 * Return: 1 if prime, otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
