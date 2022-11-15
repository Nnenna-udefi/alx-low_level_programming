#include "main.h"
/**
 * main - program that multiplies two positive numbers
 * num1 and num2 will be passed in base 10
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits.
 * If not, print Error, followed by a new line,
 * and exit with a status of 98
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 0;
	unsigned int num1, num2;

	for (num1 = 0, num2 = 0; num1 < num2; num1++, num2++)
	{
		if (num1 % 10 && num2 % 10)
		{
			mul = num1 * num2;
			printf("%d\n", mul);
		}
		else if (argc < 2)
		{
			(void) argv[mul];
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
