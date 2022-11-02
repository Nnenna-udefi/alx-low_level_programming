#include "main.h"
int prime_checker(int n, int i);
/**
 * is_prime_number - function that checks for a prime number
 * @n: input
 * Return: 1 if the input integer is a prime numbr, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * prime_checker - checks for prime number
 * @n: input to check
 * @i: n / 2, then passes to i - 1, checks if greater than 0
 * Return: prime check
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}
