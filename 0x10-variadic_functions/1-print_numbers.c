#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers followed by a new line
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 * If separator is NULL, don’t print it
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;

	if (seperator == NULL)
		return;

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(v, const unsigned int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(v);
}
