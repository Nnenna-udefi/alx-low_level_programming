#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: index, starting from 0 of the bit you want to set
 * @n: input
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits;

	if (index > 64)
		return (-1);
	bits = 1 << index;

	if ((bits | *n) == *n)
		*n = *n ^ bits;
	return (1);
}
