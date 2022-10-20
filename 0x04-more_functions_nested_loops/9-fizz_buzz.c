#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * Print Fizz for multiple of 3
 * Buzz for multiple of 5
 * FizzBuzz for multiple of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i < 100)
			printf(" ");
		else
			printf("%d", i);

		i++;
	}
	printf("\n");
	return (0);
}
