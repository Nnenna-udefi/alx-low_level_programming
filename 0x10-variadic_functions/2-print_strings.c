#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the string
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	char *str;

	va_start(v, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		str = va_arg(v, char *);

		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(v);
}
