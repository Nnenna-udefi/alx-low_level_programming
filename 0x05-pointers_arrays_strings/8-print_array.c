#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 * @n: the number of element of an array to be printed
 * @a: the input
 * numbers should be displayed in the same order as they are stored in the array
 */
void print_array(int *a, int n)
{
	int i;

for (i = 0; i < (n - 1); i++)
	printf("%d\n, ", a[i]);
if (i == (n -1))
	printf("%d", a[n -1]);
}
