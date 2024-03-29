#include "main.h"
/**
 * print_diagsums - function that prints the sum of two diagonals
 * of a square matrix of integers
 * @a: pointer
 * @size: input
 */
void print_diagsums(int *a, int size)
{
	int i, n;
	int total1 = 0;
	int total2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		total1 = total1 + a[i];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		total2 = total2 + a[n];
	printf("%d, %d\n", total1, total2);
}
