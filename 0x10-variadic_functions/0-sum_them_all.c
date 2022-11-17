#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: input
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(va, n);

	for (i = 0; i < n; i++)
		sum += va_arg(va, n);

	va_end(va);

	return (sum);
}
