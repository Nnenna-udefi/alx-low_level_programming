#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * line should end with \n
 * Return: \n if n is 0 or less
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
