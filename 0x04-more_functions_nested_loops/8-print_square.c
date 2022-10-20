#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size - size of the square
 * Return: \n if size is 0 or less
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (i = 2; i <= size; i++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
