#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, base2;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (base2 = 1, total = 0, i--; i >= 0; i--, base2 *= 2)
	{
		if (b[i] == '1')
			total += base2;
	}
	return (total);
}
