#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: input
 * @m: input
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count = 0;

	diff = n ^ m;

	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}
	return (count);
}
