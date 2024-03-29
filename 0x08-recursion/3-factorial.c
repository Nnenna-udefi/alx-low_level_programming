#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: input
 * Return: Factorial of 0 is 1, if n < 0, return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n = n * factorial(n - 1));
}
