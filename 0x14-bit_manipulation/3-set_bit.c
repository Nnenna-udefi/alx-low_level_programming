#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: index, starting from 0 of the bit you want to set
 * @n: number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);

	for (bits = 1; index > 0; index--, bits *= 2)
		;
	*n += bits;
	return (1);
}
