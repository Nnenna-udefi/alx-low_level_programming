#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @seperator: string to be printed between the string
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va-list v;
	unsigned int i;

	va_start(v, n);

	if (seperator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		str = va_arg(v, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (seperator)
				printf("%s", seperator);
	}
	print("\n");
	va_end(v);
}
