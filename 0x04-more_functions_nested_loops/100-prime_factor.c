#include <stdio.h>
#include <math.h>

/**
 * main - program that prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0;
 */
int main(void)
{
	int p;
	long num = 612852475143;

	for (p = (int) sqrt(num); p > 2; p++)
	{
		if (num % p == 0)
		{
			printf("%d\n", p);
			break;
		}
	}
	return (0);
}
