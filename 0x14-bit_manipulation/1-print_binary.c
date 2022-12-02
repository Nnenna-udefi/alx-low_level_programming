#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int k, count;
	unsigned long int temp;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (temp = n, count = 0; (temp >>= 1) > 0; count++)
		;
	for (; count >= 0; count--)
	{
		k = n >> count;
		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}
