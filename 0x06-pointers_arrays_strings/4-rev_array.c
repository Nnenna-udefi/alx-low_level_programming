#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: array of integer
 */
void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n; i--)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
